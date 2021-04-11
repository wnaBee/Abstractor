#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string commentor(string CodeLine);

int main(int argc, char* argv[]){
	fstream readfile;
	fstream putfile;
	string output = "";
	string Extensions[] = {".txt", ".cpp", ".py", ".c", ".h", ".sh", ".cs", ".vb"};
	int Exlen = sizeof(Extensions)/sizeof(Extensions[0]);
	if(argc < 3){
		cout << "./filereader [file] [output file extension]";
	}else{
		readfile.open(argv[1], ios::in);
		//define output file
		for(int i = 0; i < Exlen; i++){
			if(argv[2] == Extensions[i]){
				output = "output" + Extensions[i];
			}
		}
		if(readfile.is_open()){
			//write to a new file
			putfile.open(output, ios::out);
			string line;
			while(getline(readfile, line)){

				 cout <<"oldlines "<< line << "\n";
				 line = line + commentor(line) + "\n";
				 putfile << line;
			}
			putfile.close();
			//check the new file
			putfile.open(output, ios::in);
			while(getline(putfile, line)){
				cout <<"newlines "<< line << "\n";
			}
			putfile.close();
			readfile.close();
		}
	}
return 0;
}

string commentor(string CodeLine){
	int fulline = 0;
	int lineSeg = 0;

	vector <string> lineArray;
/*	
	while(fulline < Codeline.length){ //set current lineArray location
		for(fulline < CodeLine.length(); fulline++){ //iterate through line
			switch (CodeLine[fulline]){
				case (isalnum(CodeLine[fulline])):
					lineArray.operator[](fulline) += CodeLine[fulline];
					break;
				case (CodeLine[fulline] == "."):

					break;
				//below is a retarded way of handling operators. Can it be trimmed to `for(CodeLine[i] == (+||-||/||*||=||%||<||>||!||'|'||&||?||^||~||etc.))` or similar?
				case (CodeLine[fulline] == "=" && CodeLine[fulline+1] != "=" || CodeLine[fulline] == "+" && CodeLine[fulline+1] != "=" || CodeLine[fulline] == "-" && CodeLine[fulline+1] != "=" || CodeLine[fulline] == "*" && CodeLine[fulline+1] != "="):
				break;
			}

		}
		lineArray.push_back();
	}
*/
	string comment = "ppp";
	return comment;
}

/*list of operators:
 * ['+','-','/','*','%','<','>','&','|','!','?','^','~','=']
 *list of deliniators:
 *['.',',','(',')','[',']','{','}',':',';','\\'] 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "cppswitch.h"
#include "cppcommentor.h"
#include "pycommentor.h"
using namespace std;

string CPPcombiner(vector <string> lineArr);
string FileIDer(string CodeLine, int FLTP);

int main(int argc, char* argv[]){
	fstream readfile;
	ofstream putfile;
	string output = "";
	string Extensions[] = {"txt", "c++", "py", "C", ".h", "bash", "C#", "Vb"};
	string FilExt[] = {".txt", ".cpp", ".py", ".c", ".h", ".sh", ".cs", ".vb"};
	int filetype = 0;
	if(argc < 3){
		cout << "abstract [file] [output file extension] -c";
	}else{
		readfile.open(argv[1], ios::in);

        //define output file
		//TODO: refactor into new function returning 2 values 1 string 1 int
		for(int i = 0; i < 8; i++){ //iterate through file types
			if(argv[2] == Extensions[i]){
				if(string(argv[3]) == "FRMT"){
					output = "Temp_" + string(argv[1]);
					filetype = i;
				}else{
					output = "Output_" + string(argv[1]);
					filetype = i;
				}
				break;
			}
		}
		//TODO: end of above function


        if(readfile.is_open()){
			//write to a new file
			putfile.open(output, ios_base::binary | ios_base::out);
			string line = "";
				while(getline(readfile, line)){

					//cout <<"oldlines " << line << endl;
					line = line + FileIDer(line, filetype) + "\n";
					putfile << line;
                   //cout << "newlines " << line << endl;
                }
				putfile.close();
				readfile.close();
		}
		if(string(argv[3]) == "FRMT"){cout << "created: " << string(argv[1]) << "\n";
		}else{cout << "created: " << output << "\n";}
	}
	
	return 0;
}



string FileIDer(string CodeLine, int FLTP){
	
	switch(FLTP){
		case 0:
			
			break;
		case 1:
			return CPPcombiner(CPPcommentor(CodeLine));
			break;
		case 2:
            return pycombiner(pycommentor(CodeLine));
			break;
		case 3:
			//comment = " //";
			break;
		case 4:
			return CPPcombiner(CPPcommentor(CodeLine));
			break;
		case 5:
			//comment = " #";
			break;
		case 6:
			//comment = " //";
			break;
		case 7:
			//comment = " '";
			break;
	}
	return 0;
}


/*list of operators:
 * ['+','-','/','*','%','<','>','&','|','!','?','^','~','=']
 *list of deliniators:
 *['.',',','(',')','[',']','{','}',':',';','\'] 
 */


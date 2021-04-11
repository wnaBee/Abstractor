#include <iostream>
#include <fstream>
#include <string>

using namespace std;
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
		for(int i = 0; i < Exlen; i++){
			if(argv[2] == Extensions[i]){
				output = "output" + Extensions[i];
			}
		}
		if(readfile.is_open()){
			putfile.open(output, ios::out);
			string line;
			while(getline(readfile, line)){

				 cout <<"oldlines "<< line << "\n";
				 line = line + "ppp\n";
				 putfile << line;
			}
			putfile.close();
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


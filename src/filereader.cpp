#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/regex.hpp>
#include "cppswitch.h"
#include "cppcommentor.h"
#include "pycommentor.h"
using namespace std;

string CPPcombiner(vector <string> lineArr);
string FileIDer(string CodeLine, int FLTP);
string Prettify(string CodeLine);
int helpmsg();

int main(int argc, char* argv[]){
	fstream readfile;
	fstream putfile;
	string output = "";
	string Extensions[] = {"txt", "c++", "py", "C", ".h", "bash", "C#", "Vb"};
	string FilExt[] = {".txt", ".cpp", ".py", ".c", ".h", ".sh", ".cs", ".vb"};
	bool runcmds[2] = {false, false};
	int filetype = 0;

	if(argc < 4){
		helpmsg();
	}else{
        //define output file
		//TODO: refactor into tuple returning 2 values 1 string 1 int

		for(int i = 0; i < 8; i++){ //iterate through file types
			if(argv[2] == Extensions[i]){
					output = "Output_" + string(argv[1]);
					filetype = i;
				break;
			}
		}
		//TODO: end of above function
		//TODO: create function parsing options, returning runcmds array
		for(int i = 3; i < argc; i++){
			string currentArg = argv[i];
			if(argv[i] == "--"){
				continue;
			}else if(currentArg == "-f" || currentArg == "--format"){
				runcmds[0] = true;
			}else if(currentArg == "-c" || currentArg == "--comment"){
				runcmds[1] = true;
			}else if(currentArg == "-h" || currentArg == "--help"){
				helpmsg();
			}
		}
		//TODO: end of above function

		readfile.open(argv[1], ios::in);

        if(readfile.is_open()){
			//write to a new file
			putfile.open(output, ios::out);
			string line = "";
				while(getline(readfile, line)){

                    line.erase(std::remove(line.end()-2, line.end(), '\r'), line.end());

					if(runcmds[0] == true){
						line = Prettify(line);
					}
					if(runcmds[1] == true){
						line.erase(std::remove(line.end()-1, line.end(), '\n'), line.end());
						line = line + FileIDer(line, filetype);
					}
					putfile << line + "\n";
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


string Prettify(string CodeLine){
	CodeLine = boost::regex_replace(CodeLine, boost::regex("{"), "{\n");
	CodeLine = boost::regex_replace(CodeLine, boost::regex("{\n\n"), "{\n");
	CodeLine = boost::regex_replace(CodeLine, boost::regex("}"), "\n}");
	CodeLine = boost::regex_replace(CodeLine, boost::regex("\n\n}"), "\n}");
	CodeLine = boost::regex_replace(CodeLine, boost::regex(";"), ";\n");
	CodeLine = boost::regex_replace(CodeLine, boost::regex(";\n\n"), ";\n");

	return CodeLine;
}

int helpmsg(){
	cout << "abstract [filename] [language] [-options]\n\n" << "options:\n--comment     	creates automated comments for every line\n -c		of code in the program" << "\n\n--format    	deobfuscates code and makes it look nice\n -f" << "\n\n--help		displays this message\n -h" << "\n\nlanguages:\nc++\n.h (c++ header)\npy | python" << endl;
    cout << "version: 1.7" << endl;
	return 0;
}

/*list of operators:
 * ['+','-','/','*','%','<','>','&','|','!','?','^','~','=']
 *list of deliniators:
 *['.',',','(',')','[',']','{','}',':',';','\'] 
 */


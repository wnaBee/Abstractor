#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm> 
#include "cppswitch.h"

using namespace std;

string commentor(string CodeLine, int filetype);
string trim(const std::string& str, const std::string& whitespace);

int main(int argc, char* argv[]){
	fstream readfile;
	fstream putfile;
	string output = "";
	string Extensions[] = {".txt", ".cpp", ".py", ".c", ".h", ".sh", ".cs", ".vb"};
	int filetype = 0;
	if(argc < 3){
		cout << "./filereader [file] [output file extension]";
	}else{
		readfile.open(argv[1], ios::in);
		//define output file
		for(int i = 0; i < 8; i++){ //iterate through file types
			if(argv[2] == Extensions[i]){
				output = "output" + Extensions[i];
				filetype = i;
			}
		}
		if(readfile.is_open()){
			//write to a new file
			putfile.open(output, ios::out);
			string line;
				while(getline(readfile, line)){

//					cout <<"oldlines "<< line << "\n";
					line = line + commentor(line, filetype) + "\n";
					putfile << line;
				}
				putfile.close();
				//check the new file
				putfile.open(output, ios::in);
				while(getline(putfile, line)){
					cout << line << "\n";
				}
				putfile.close();
				readfile.close();
		}
	}
	cout << "created: " << output << "\n";
	return 0;
}

string commentor(string CodeLine, int filetype){
	int fulline = 0;
	int lineSeg = 0;
	string comment = "";
	string nextcmd = "";
	string prevchar = "";
	string doubleprev = "";
	vector <string> lineArray;
	
	for(int i = 0; i < CodeLine.length(); i++){
		switch(CodeLine[i]){ //fix case to not include last char and to remove unnecessary spaces
			case '+':
				if(prevchar == "+"){
					lineArray.back() += "+";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '-':
				if(prevchar == "-"){
					lineArray.back() += "-";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '/':
				if(prevchar == "/" || prevchar == "*"){
					lineArray.back() += "/";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '*':
				if(prevchar == "/" || prevchar == "." || (doubleprev == "-" && prevchar == ">")){
					lineArray.back() += "*";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '%':
				lineArray.push_back(nextcmd);
				
				nextcmd = "";
				break;
			case '<':
				if(prevchar == "<"){
					lineArray.back() += "<";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '>':
				if(prevchar == ">" || prevchar == "-"){
					lineArray.back() += ">";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '&':
				if(prevchar == "&"){
					lineArray.back() += "&";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '|':
				if(prevchar == "|"){
					lineArray.back() += "|";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '!':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '?':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '^':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '~':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '=':
				if(prevchar == "=" || prevchar == "!" || prevchar == "<" || prevchar == ">" || prevchar == "*" || prevchar == "/" || prevchar == "%" || prevchar == "+" || prevchar == "-" || (doubleprev == ">" && prevchar == ">") || (doubleprev == "<" && prevchar == "<") || prevchar == "&" || prevchar == "^" || prevchar == "|"){
					lineArray.back() += "=";
				}else{
					lineArray.push_back(nextcmd);
				}
				nextcmd = "";
				break;
			case '.':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case ',':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '(':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case ')':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '[':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case ']':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '{':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '}':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case ':':
				if(prevchar == ":" || prevchar == "?"){
					lineArray.back() += ":";
				}else{
					lineArray.push_back(nextcmd);
				}
				//cout << prevchar << "\n";
				nextcmd = "";
				break;
			case ';':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			case '\\':
				lineArray.push_back(nextcmd);
				nextcmd = "";
				break;
			default:
				if(prevchar == ":" || prevchar == "+"|| prevchar == "-"|| prevchar == "("|| prevchar == ")"|| prevchar == "["|| prevchar == "]"|| prevchar == "."|| prevchar == ">"|| prevchar == "~"|| prevchar == "!"|| prevchar == "&"|| prevchar == "*"|| prevchar == "<"|| prevchar == "/"|| prevchar == "%"|| prevchar == "^"|| prevchar == "|"|| prevchar == "?"|| prevchar == ","){
					lineArray.push_back(nextcmd); 
					nextcmd = nextcmd.substr (1);
				
				}
		}
		nextcmd += CodeLine[i];
		doubleprev = prevchar;
		prevchar = CodeLine[i];
		//cout << nextcmd << " | " << CodeLine[i] << " | " << prevchar << " | " << doubleprev << "\n";
		
		
		
	}
	lineArray.push_back(nextcmd);
	for(int i = 0; i < lineArray.size(); i++){
		lineArray[i].erase(std::find_if(lineArray[i].rbegin(), lineArray[i].rend(), std::bind1st(std::not_equal_to<char>(), ' ')).base(), lineArray[i].end());
	}
		
	switch(filetype){
		case 0:
			
			break;
		case 1:
			comment = " //";
			for(int i = 0; i < lineArray.size(); i++){
				//cout << lineArray[i] << "|";
				comment += cppcommentMake(lineArray[i]);
			}
			comment.erase(remove(comment.begin(), comment.end(), '\t'), comment.end());
			comment.erase(comment.begin(), std::find_if(comment.begin(), comment.end(), std::bind1st(std::not_equal_to<char>(), ' ')));
			//cout <<"\n";
			break;
		case 2:
			comment = " #";
			break;
		case 3:
			comment = " //";
			break;
		case 4:
			comment = " //";
			for(int i = 0; i < lineArray.size(); i++){
				comment += cppcommentMake(lineArray[i]);
			}
			comment.erase(remove(comment.begin(), comment.end(), '\t'), comment.end());
			break;
		case 5:
			comment = " #";
			break;
		case 6:
			comment = " //";
			break;
		case 7:
			comment = " '";
			break;
	}
	return comment;
}

/*list of operators:
 * ['+','-','/','*','%','<','>','&','|','!','?','^','~','=']
 *list of deliniators:
 *['.',',','(',')','[',']','{','}',':',';','\'] 
 */

string trim(const std::string& str, const std::string& whitespace = " \t"){
    const auto strBegin = str.find_first_not_of(whitespace);
    if (strBegin == std::string::npos)
        return ""; // no content

    const auto strEnd = str.find_last_not_of(whitespace);
    const auto strRange = strEnd - strBegin + 1;

    return str.substr(strBegin, strRange);
}

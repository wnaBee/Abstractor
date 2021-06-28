#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "pyoperatorswitch.h"
#include "pyswitch.h"
using namespace std;

int PCF = 0;

vector<string> pycommentor(string CodeLine){
	int fulline = 0;
	int lineSeg = 0;
	int IF = 0;
    int NestCount = 0;
	string nextcmd = "";
	string prevchar = "";
	string doubleprev = "";
	vector <string> lineArray;
	vector <string> ParamArray;
	
	for(int i = 0; i < CodeLine.length(); i++){
		cout << CodeLine[i] << endl;
		switch(PCF){
				case 0:
					switch(CodeLine[i]){ //fix case to not include last char and to remove unnecessary spaces
						case '+':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case '-':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case '/':
							if(prevchar == "/"){
								lineArray.push_back(prevchar + "/");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '*':
							if(prevchar == "*"){
								lineArray.push_back(prevchar + "*");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '@':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case '%':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case '~':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case '<':
							if(prevchar == "<"){
								lineArray.push_back(prevchar + "<");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '>':
							if(prevchar == ">"){
								lineArray.push_back(prevchar + ">");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '&':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case '^':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case '|':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case '=':
							if(prevchar == ">" || prevchar == ">" || prevchar == "=" || prevchar == "!" || prevchar == ":" || prevchar == "*" || prevchar == "/" || prevchar == "%" || prevchar == "+" || prevchar == "-" ){
								lineArray.push_back(prevchar + "=");
								nextcmd.pop_back();
								i++;
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
							lineArray.push_back(nextcmd + "(");
							NestCount++;
                            lineArray.push_back("`" + to_string(NestCount) + "`");
							nextcmd.pop_back();
							//check if vector entry = `[int]` if so, remove entry and set following entries as A[int] until `e[int]`
                            //i++;
                            nextcmd = "";
                        case ')':
                            lineArray.push_back(nextcmd);
							if(CodeLine[i] == ')'){ //code doesn't work without this extra condition, idk why but DO NOT REMOVE
								lineArray.push_back("`" + to_string(NestCount) + "e`");
								NestCount--;
							}
							nextcmd = "";
							break;
						case '[':
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case ']':
							if(prevchar == "["){
								lineArray.push_back(prevchar+"]");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
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
						case '"':
                            if(doubleprev == "\"" && prevchar == "\""){
                                lineArray.push_back("");
								nextcmd.pop_back();
								i++;
                                PCF = 3;
                            }else{
                                lineArray.push_back(nextcmd);
                                PCF = 1;
                            }
							nextcmd = "";
							break;
                        case '#':
                            lineArray.push_back(nextcmd);
							PCF = 2;
                            i++;
							nextcmd = "";
						default:
							if(prevchar == ":" || prevchar == "+"|| prevchar == "-"|| prevchar == "("|| prevchar == ")"|| prevchar == "["|| prevchar == "]"|| prevchar == "."|| prevchar == ">"|| prevchar == "~"|| prevchar == "!"|| prevchar == "&"|| prevchar == "*"|| prevchar == "<"|| prevchar == "/"|| prevchar == "%"|| prevchar == "^"|| prevchar == "|"|| prevchar == "?"|| prevchar == ","|| prevchar == "="){
								lineArray.push_back(nextcmd); 
								//nextcmd = nextcmd.substr(1);
                                nextcmd = "";
							}
					}
					break;
				case 1:
					if(CodeLine[i] == '"'){PCF = 0;}
					break;
                case 2:
                    if(i = CodeLine.length()){PCF = 0;}
                    break;
                case 3:
                    if(CodeLine[i] == '"' && CodeLine[i-1] == '"' && CodeLine[i-2] == '"'){PCF = 0; i++;}
                    break; 
			}
			if(PCF == 3 || PCF == 2){}else{
                nextcmd += CodeLine[i];
                doubleprev = prevchar;
                prevchar = CodeLine[i];
            }
    }
		
	lineArray.push_back(nextcmd);
	for(int i = 0; i < lineArray.size(); i++){
		lineArray[i].erase(lineArray[i].begin(), std::find_if(lineArray[i].begin(), lineArray[i].end(), std::bind1st(std::not_equal_to<char>(), ' ')));
	}
	return lineArray;
}
	
string pycombiner(vector <string> lineArr){
	string precomment = "";
	string comment = "";
	int Nest = 0;
	//vector <string> A1, A2, A3;
	
	if (lineArr[0].length() >= 2){
		comment = " #";
	}
	for(int i = 0; i < lineArr.size(); i++){
		//cout << lineArray[i] << "|";
		if(pyoperatorcommentMake(lineArr[i]) == "notanoperator"){
			precomment += pycommentMake(lineArr[i]);
		}else{
			precomment += pyoperatorcommentMake(lineArr[i]);
		}
	}
	precomment.erase(remove(precomment.begin(), precomment.end(), '\t'), precomment.end());
	precomment.erase(precomment.begin(), std::find_if(precomment.begin(), precomment.end(), std::bind1st(std::not_equal_to<char>(), ' ')));
	
	// move and replace {}^
	comment += precomment;
	return comment;
}

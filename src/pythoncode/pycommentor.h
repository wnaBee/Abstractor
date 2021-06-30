#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/regex.hpp>
#include "pyoperatorswitch.h"
#include "pyswitch.h"
using namespace std;

int PCF = 0;

string SliceNDice(string input);

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
		//cout << CodeLine[i] << endl;
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
                           // i++;
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
	
	comment += SliceNDice(precomment);
	return comment;
}

string SliceNDice(string input){
	 
	string Sliced;							//relevant regex patterns
	string InsertID = "[0-9]\\^{.*?}";
	string CutDelimiter = "`[0-9]`.*?`[0-9]e`";

	int wipes = distance(boost::sregex_iterator(input.begin(), input.end(), boost::regex(InsertID)), boost::sregex_iterator());
	cout << wipes << endl;
	boost::sregex_iterator Inserters(input.begin(), input.end(), boost::regex(CutDelimiter)); //extract patterns
	boost::sregex_iterator end;

	vector<string> matches;

	for(; Inserters != end; ++Inserters){ //convert matches to vector format
		matches.push_back(Inserters->str());
	}
	string Iclean = CutDelimiter;
	Iclean.replace(4,1, to_string(matches.size())); 
	Iclean.replace(Iclean.end()-4,Iclean.end()-3, to_string(matches.size()));
	cout << Iclean << endl;
	input = boost::regex_replace(input, boost::regex(Iclean), "");
	cout << input << endl; 
	
	Sliced = input;
	for(int i = 0; i < matches.size(); i++){ //insert pattern at correct position
		string tempID = InsertID;
		tempID = tempID.replace(0,5,to_string(i+1));
		boost::regex rID(tempID);
		
		Sliced = boost::regex_replace(Sliced, rID, matches[i]);
	}
	if(!matches.empty()){
		matches.erase(matches.begin(),matches.begin()+wipes); //this shit throws SIGSEGV
	}
	for(int i = 0; i < matches.size(); i++){
		Sliced += matches[i];
	}
	Sliced = boost::regex_replace(Sliced, boost::regex("`[0-9]`"), "");
	Sliced = boost::regex_replace(Sliced, boost::regex("`[0-9]e`"), "");
	Sliced = boost::regex_replace(Sliced, boost::regex("[0-9]^{"), "");
	Sliced = boost::regex_replace(Sliced, boost::regex("}"), "");

	
	return Sliced;
}

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "pyoperatorswitch.h"
using namespace std;

int PCF = 0;

vector<string> pycommentor(string CodeLine){
	int fulline = 0;
	int lineSeg = 0;
	int IF = 0;
	int LF = 0;
	string nextcmd = "";
	string prevchar = "";
	string doubleprev = "";
	vector <string> lineArray;
	
	for(int i = 0; i < CodeLine.length(); i++){
		if(CodeLine[i] == ' ' && LF != 0){ LF = 0;}
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
							lineArray.push_back(nextcmd);
							nextcmd = "";
							break;
						case ')':
							if(prevchar == "("){
								lineArray.push_back(prevchar + ")");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
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
							lineArray.push_back(nextcmd);
							PCF = 1;
							nextcmd = "";
							break;
						default:
							if(prevchar == ":" || prevchar == "+"|| prevchar == "-"|| prevchar == "("|| prevchar == ")"|| prevchar == "["|| prevchar == "]"|| prevchar == "."|| prevchar == ">"|| prevchar == "~"|| prevchar == "!"|| prevchar == "&"|| prevchar == "*"|| prevchar == "<"|| prevchar == "/"|| prevchar == "%"|| prevchar == "^"|| prevchar == "|"|| prevchar == "?"|| prevchar == ","|| prevchar == "="){
								lineArray.push_back(nextcmd); 
								nextcmd = nextcmd.substr (1);
							
							}
					}
					break;
				case 1:
					if(CodeLine[i] == '"'){PCF = 0;}
					break;
			}
			
			nextcmd += CodeLine[i];
			doubleprev = prevchar;
			prevchar = CodeLine[i];
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
	
	if (lineArr[0].length() >= 2){
		comment = " #";
	}
	for(int i = 0; i < lineArr.size(); i++){
		//cout << lineArray[i] << "|";
		if(pyoperatorcommentMake(lineArr[i]) == "notanoperator"){
			//precomment += pycommentMake(lineArr[i]);
			precomment += " " + lineArr[i];
		}else{
			precomment += pyoperatorcommentMake(lineArr[i]);
		}
	}
	precomment.erase(remove(precomment.begin(), precomment.end(), '\t'), precomment.end());
	precomment.erase(precomment.begin(), std::find_if(precomment.begin(), precomment.end(), std::bind1st(std::not_equal_to<char>(), ' ')));
	
	comment += precomment;
	return comment;
}

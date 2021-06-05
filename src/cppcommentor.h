#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "operatorswitch.h"
using namespace std;

int CF = 0;

vector<string> CPPcommentor(string CodeLine){
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
		switch(CF){
				case 0:
					switch(CodeLine[i]){ //fix case to not include last char and to remove unnecessary spaces
						case '+':
							if(prevchar == "+"){
								lineArray.push_back(prevchar + "+");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '-':
							if(prevchar == "-"){
								lineArray.push_back(prevchar + "-");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '/':
							if(prevchar == "/"){
								CF = 2;
								nextcmd.pop_back();
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '*':
							if(prevchar == "/"){
								lineArray.push_back(prevchar + "*");
								nextcmd.pop_back();
								i++;
								CF = 3;
							}else if(prevchar == "."){
								lineArray.push_back(prevchar + "*");
								nextcmd.pop_back();
								i++;
							}else if(doubleprev == "-" && prevchar == ">"){
								lineArray.erase(lineArray.end());
								lineArray.push_back(doubleprev + prevchar + "*"); 
								nextcmd.pop_back();
								i++;
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
								lineArray.push_back(prevchar + "<");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
								LF = lineArray.size();
							}
							nextcmd = "";
							break;
						case '>':
							if(prevchar == ">" || prevchar == "-"){
								lineArray.push_back(prevchar + ">"); 
								nextcmd.pop_back();
								i++;
							}else if(LF != 0){
								lineArray.push_back(nextcmd);
								lineArray.push_back(">`");
								lineArray.at(LF) = "<`";
								nextcmd.pop_back();
								i++;
								LF = 0;
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '&':
							if(prevchar == "&"){
								lineArray.push_back(prevchar + "&");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
							nextcmd = "";
							break;
						case '|':
							if(prevchar == "|"){
								lineArray.push_back(prevchar + "|");
								nextcmd.pop_back();
								i++;
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
							if(prevchar == "=" || prevchar == "!" || prevchar == "<" || prevchar == ">" || prevchar == "*" || prevchar == "/" || prevchar == "%" || prevchar == "+" || prevchar == "-" || prevchar == "&" || prevchar == "^" || prevchar == "|"){
								lineArray.push_back(prevchar + "=");
								nextcmd.pop_back();
								i++;
							}else if((doubleprev == ">" && prevchar == ">") || (doubleprev == "<" && prevchar == "<")){
								lineArray.push_back(doubleprev + prevchar + "=");
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
						case ':':
							if(prevchar == ":" || prevchar == "?"){
								lineArray.push_back(prevchar + ":");
								nextcmd.pop_back();
								i++;
							}else{
								lineArray.push_back(nextcmd);
							}
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
						case '"':
							lineArray.push_back(nextcmd);
							CF = 1;
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
				if(CodeLine[i] == '"'){CF = 0;}
				break;
			case 2:
				if(i = CodeLine.length()){CF = 0;}
				break;
			case 3:
				if(CodeLine[i] == '/' && prevchar == "*"){CF = 0;}
				break;
			
		}
			if(CF == 3 || CF == 2){}else{
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

string CPPcombiner(vector <string> lineArr){
	string precomment = "";
	string comment = "";
	
	if (lineArr.size() < 2 || CF == 3 || CF == 2){}else{
		comment = " //";
	}
	for(int i = 0; i < lineArr.size(); i++){
		//cout << lineArray[i] << "|";
		if(operatorcommentMake(lineArr[i]) == "notanoperator"){
			precomment += cppcommentMake(lineArr[i]);
		}else{
			precomment += operatorcommentMake(lineArr[i]);
		}
	}
	precomment.erase(remove(precomment.begin(), precomment.end(), '\t'), precomment.end());
	precomment.erase(precomment.begin(), std::find_if(precomment.begin(), precomment.end(), std::bind1st(std::not_equal_to<char>(), ' ')));
	
	comment += precomment;
	return comment;
}

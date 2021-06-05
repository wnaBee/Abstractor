#include <map>
#include <string>
using namespace std;
namespace opr {
	enum Options{
		opt1,
		opt2,
		opt3,
		opt4,
		opt5,
		opt6,
		opt7,
		opt8,
		opt9,
		opt10,
		opt11,
		opt12,
		opt13,
		opt14,
		opt15,
		opt16,
		opt17,
		opt18,
		opt19,
		opt20,
		opt21,
		opt22,
		opt23,
		opt24,
		opt25,
		opt26,
		opt27,
		opt28,
		opt29,
		opt30,
		opt31,
		opt32,
		opt33,
		opt34,
		opt35,
		opt36,
		opt37,
		opt38,
		opt39,
		opt40,
		opt41,
		opt42,
		opt43,
		opt44,
		opt45,
		opt46,
		opt47,
		opt48,
		opt49,
		opt50,
		opt51,
		opt52,
		opt53,
		opt54,
		opt55
		
	};
	int resolveOption(string commentarg){
		std::map<string, int>optionStrings;
        std::map<string, int>::iterator itr;
			optionStrings["+"] = opt2;
			optionStrings["-"] = opt3;
			optionStrings["/"] = opt4;
			optionStrings["*"] = opt5;
			optionStrings["%"] = opt6;
			optionStrings["<"] = opt7;
			optionStrings[">"] = opt8;
			optionStrings["&"] = opt9;
			optionStrings["|"] = opt10;
			optionStrings["!"] = opt11;
			optionStrings["?"] = opt12;
			optionStrings["^"] = opt13;
			optionStrings["~"] = opt14;
			optionStrings["="] = opt15;
			optionStrings["."] = opt16;
			optionStrings[","] = opt17;
			optionStrings["("] = opt18;
			optionStrings[")"] = opt19;
			optionStrings["["] = opt20;
			optionStrings["]"] = opt21;
			optionStrings["{"] = opt22;
			optionStrings["}"] = opt23;
			optionStrings[":"] = opt24;
			optionStrings[";"] = opt25;
			optionStrings["\\"] = opt26;
			optionStrings["::"] = opt27;
			optionStrings["++"] = opt28;
			optionStrings["--"] = opt29;
			optionStrings["->"] = opt30;
			optionStrings[".*"] = opt31;
			optionStrings["->*"] = opt32;
			optionStrings["<<"] = opt33;
			optionStrings[">>"] = opt34;
			optionStrings["<="] = opt35;
			optionStrings[">="] = opt36;
			optionStrings["=="] = opt37;
			optionStrings["!="] = opt38;
			optionStrings["&&"] = opt39;
			optionStrings["||"] = opt40;
			optionStrings["*="] = opt41;
			optionStrings["/="] = opt42;
			optionStrings["%="] = opt43;
			optionStrings["+="] = opt44;
			optionStrings["-="] = opt45;
			optionStrings[">>="] = opt46;
			optionStrings["<<="] = opt47;
			optionStrings["&="] = opt48;
			optionStrings["^="] = opt49;
			optionStrings["|="] = opt50;
			optionStrings["?:"] = opt51;
			optionStrings["<`"] = opt52;
			optionStrings[">`"] = opt53;
			optionStrings["()"] = opt54;
			optionStrings["[]"] = opt55;
		
		itr = optionStrings.find(commentarg);
		if( itr != optionStrings.end() ) {
			return itr->second;
		}
		return opt1;
	}
}

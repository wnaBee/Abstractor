#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
namespace kwd { //define namespace
    enum Options{ //enumerate alternatives
        Option_Invalid,
        assert,
        isalpha,
        isblank,
        iscntrl,
        Valarray_operators
        //etc...
        };
//later
Options resolveOptions(string input){ //find enum values
        static const map < string, Options> optionStrings { //inputmap
            { "assert", assert },
            { "isalpha", isalpha },
            { "isblank", isblank },
            { "iscntrl", iscntrl },
            { "Valarray_operators", Valarray_operators }
            //etc...
            };
//finally closing with
    auto itr = optionStrings.find(input);
    if( itr != optionStrings.end() ) {
        return itr->second;
    }
    return Option_Invalid;
    }
}


string commentMake(string commentarray) {
        string comment = "";
        for(int i =0; i < 1; i++){
            switch (kwd::resolveOptions(commentarray)){
            case kwd::Option_Invalid:
            comment += commentarray + " ";
            break;
            case kwd::assert:
            comment += "Evaluate assertion ";
            break;
            case kwd::isalpha:
            comment += "Check if character is alphabetic ";
            break;
            case kwd::isblank:
            comment += "Check if character is blank ";
            break;
            case kwd::iscntrl:
            comment += "Check if character is a control character ";
            break;
            case kwd::Valarray_operators :
            comment += "";
            break;
            }
      }
}
int main(){
	string inp[]={"assert"};
	cout << commentMake(inp[0]);
}

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
Options resolveOptions(std::string input){ //find enum values
        static const std::map<std::string, Options> optionStrings { //inputmap
            { "assert", assert },
            { "isalpha", isalpha },
            { "isblank", isblank },
            { "iscntrl", iscntrl },
            { "Valarray_operators", Valarray_operators }
            //etc...
            };
//finally closing with
        auto itr = optionStrings.find(input); //search for hit
        if( itr != optionStrings.end() ) {
            return *itr;
        }
    return Option_Invalid;
    }
}


string commentMake(string commentarray[]) {
        int commentarraylen =sizeof(commentarray)/sizeof(commentarray[0]);
        kwd::Options resolveOption(string input);
        string comment = "";
        for(int i =0; i < commentarraylen; i++){
            switch (resolveOption(commentarray[i])){
            case kwd::Option_Invalid:
            comment += commentarray[i] + " ";
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

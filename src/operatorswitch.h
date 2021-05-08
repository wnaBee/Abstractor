#include <string>
#include "operatorenummap.h"
using namespace std;
string operatorcommentMake(string commentarg) {
	string comment = "";
	switch (opr::resolveOption(commentarg)){
		case opr::opt1:
			comment += "notanoperator";
		break;
		case opr::opt2: 
		//+
			comment += "added to ";
		break;
		case opr::opt3: 
		//-
			comment += "subtracted from ";
		break;
		case opr::opt4: 
		//'/'
			comment += "divided by ";
		break;
		case opr::opt5: 
		//*
			comment += "multiplied with ";
		break;
		case opr::opt6: 
		//%
			comment += "modulus of ";
		break;
		case opr::opt7: 
		//<
			comment += "lesser than ";
		break;
		case opr::opt8: 
		//>
			comment += "greater than ";
		break;
		case opr::opt9: 
		//&
			comment += "and ";
		break;
		case opr::opt10: 
		//|
			comment += "or ";
		break;
		case opr::opt11: 
		//!
			comment += "not ";
		break;
		case opr::opt12: 
		//?
			comment += "conditional not ";
		break;
		case opr::opt13: 
		//^
			comment += "xor ";
		break;
		case opr::opt14: 
		//~
			comment += "bitwise not ";
		break;
		case opr::opt15: 
		// =
			comment += "is assigned as";
		break;
		case opr::opt16: 
		//.
			comment += "access ";
		break;
		case opr::opt17: 
		//,
			comment += ", ";
		break;
		case opr::opt18: 
		//(
			comment += "using ";
		break;
		case opr::opt19: 
		//)
			comment += ". ";
		break;
		case opr::opt20: 
		//[
			comment += "on ";
		break;
		case opr::opt21: 
		//]
			comment += ". ";
		break;
		case opr::opt22: 
		//{
			comment += "opens loop/function ";
		break;
		case opr::opt23: 
		//}
			comment += "closes loop/function ";
		break;
		case opr::opt24: 
		//:
			comment += ": ";
		break;
		case opr::opt25: 
		//;
			comment += " ";
		break;
		case opr::opt26: 
		//"\\"
			comment += "escapes ";
		break;
		case opr::opt27:
		//::
		comment += "as namespace do ";
		break;
		case opr::opt28:
		//++
		comment += "+ 1 ";
		break;
		case opr::opt29:
		//--
		comment += "- 1 ";
		break;
		case opr::opt30:
		//->
		comment += "access ";
		break;
		case opr::opt31:
		//.*
		comment += "member pointer ";
		break;
		case opr::opt32:
		//->*
		comment += "access member pointer ";
		break;
		case opr::opt33:
		//<<
		comment += "shift left ";
		break;
		case opr::opt34:
		//>>
		comment += "shift right ";
		break;
		case opr::opt35:
		//<=
		comment += "equals or less than ";
		break;
		case opr::opt36:
		//>=
		comment += "equals or greater than ";
		break;
		case opr::opt37:
		//==
		comment += "is ";
		break;
		case opr::opt38:
		//!=
		comment += "is not ";
		break;
		case opr::opt39:
		//&&
		comment += "and ";
		break;
		case opr::opt40:
		//||
		comment += "or ";
		break;
		case opr::opt41:
		//*=
		comment += "equals multiplied by ";
		break;
		case opr::opt42:
		///=
		comment += "equals divided by ";
		break;
		case opr::opt43:
		//%=
		comment += "equals modulus by ";
		break;
		case opr::opt44:
		//+=
		comment += "equals plus ";
		break;
		case opr::opt45:
		//-=
		comment += "equals minus ";
		break;
		case opr::opt46:
		//>>=
		comment += "bitshift right assign ";
		break;
		case opr::opt47:
		//<<=
		comment += "bitshift left assign ";
		break;
		case opr::opt48:
		//&=
		comment += "bitwise and assgn ";
		break;
		case opr::opt49:
		//^=
		comment += " bitwise xor assign ";
		break;
		case opr::opt50:
		//|=
		comment += "bitwise 'or' assign ";
		break;
		case opr::opt51:
		//?:
		comment += "terniary conditional ";
		break;
		case opr::opt52:
			comment += "< ";
			break;
		case opr::opt53:
			comment += "> ";
			break;
	}
	return comment;
}

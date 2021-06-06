#include <string>
#include "pyoperatorenummap.h"
string pyoperatorcommentMake(string commentarg) {
        string comment = "";
        switch (pyop::resolveOption(commentarg)){
                case pyop::opt1:
					comment += "notanoperator";
					break;
				case pyop::opt2:
				//await
					comment += " Await expression";
					break;
				case pyop::opt3:
				//**
					comment += " to the power off";
					break;
				case pyop::opt4:
				//~
					comment += " bitwise NOT";
					break;
				case pyop::opt5:
				//*
					comment += " multiplied by";
					break;
				case pyop::opt6:
				//@
					comment += " matrix multiplication";
					break;
				case pyop::opt7:
				//"/"
					comment += " divided by";
					break;
				case pyop::opt8:
				//"//"
					comment += " divided to floor by";
					break;
				case pyop::opt9:
				//%
					comment += " remainder by";
					break;
				case pyop::opt10:
				//+
					comment += " Added to";
					break;
				case pyop::opt11:
				//-
					comment += " subtracted from";
					break;
				case pyop::opt12:
				//<<
					comment += " Shift left";
					break;
				case pyop::opt13:
				//>>
					comment += " shift right";
					break;
				case pyop::opt14:
				//&
					comment += " Bitwise AND";
					break;
				case pyop::opt15:
				//^
					comment += " Bitwise XOR";
					break;
				case pyop::opt16:
				//|
					comment += " Bitwise OR";
					break;
				case pyop::opt17:
				//in
					comment += " in";
					break;
				case pyop::opt18:
				//is
					comment += " is";
					break;
				case pyop::opt19:
				//<
					comment += " lesser than";
					break;
				case pyop::opt20:
				//<=
					comment += " lesser to or equals";
					break;
				case pyop::opt21:
				//>
					comment += " greater than";
					break;
				case pyop::opt22:
				//>=
					comment += " greater than or equals";
					break;
				case pyop::opt23:
				//!=
					comment += " doesn't equal";
					break;
				case pyop::opt24:
				//==
					comment += " equals";
					break;
				case pyop::opt25:
				//not
					comment += " not";
					break;
				case pyop::opt26:
				//and
					comment += " and";
					break;
				case pyop::opt27:
				//or
					comment += " or";
					break;
				case pyop::opt28:
				//lambda
					comment += " anonymous function";
					break;
				case pyop::opt29:
				//:=
					comment += " assignment expression";
					break;
				case kwd::opt30:
				//.
					comment += ".";
					break;
				case kwd::opt31:
				//,
					comment += ",";
					break;
				case kwd::opt32:
				//(
					comment += " using";
					break;
				case kwd::opt33:
				//)
					comment += ".";
					break;
				case kwd::opt34:
				//[
					comment += " on";
					break;
				case kwd::opt35:
				//]
					comment += ".";
					break;
				case kwd::opt36:
				//{
					comment += " containing";
					break;
				case kwd::opt37:
				//}
					comment += ".";
					break;
				case kwd::opt38:
				//*=
					comment += " equals and multiplied by";
					break;
				case kwd::opt39:
				///=
					comment += " equals and divided by";
					break;
				case kwd::opt40:
				//%=
					comment += " equals and modulus of";
					break;
				case kwd::opt41:
				//+=
					comment += " equals and added to by";
					break;
				case kwd::opt42:
				//-=
					comment += " equals and subtracted from";
					break;
				case kwd::opt43:
				//=
					comment += " is asigned as";
					break;

       }
       return comment;
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../include/Automata.h"
#define RESERVED_STAGE_LEX_ID 7
typedef struct
{
    unsigned char state;
    unsigned char accepted;
    unsigned char lexID;
    unsigned int lastPos;
} AutomataReturn;
AutomataReturn state00(int startPos, char* string);
AutomataReturn state01(int startPos, char* string);
AutomataReturn state02(int startPos, char* string);
AutomataReturn state03(int startPos, char* string);
AutomataReturn state04(int startPos, char* string);
AutomataReturn state05(int startPos, char* string);
AutomataReturn state06(int startPos, char* string);
AutomataReturn state07(int startPos, char* string);
AutomataReturn state08(int startPos, char* string);
AutomataReturn state09(int startPos, char* string);
AutomataReturn state0a(int startPos, char* string);
AutomataReturn state0b(int startPos, char* string);
AutomataReturn state0c(int startPos, char* string);
AutomataReturn state0d(int startPos, char* string);
AutomataReturn state0e(int startPos, char* string);
AutomataReturn state0f(int startPos, char* string);
AutomataReturn state10(int startPos, char* string);
AutomataReturn state11(int startPos, char* string);
AutomataReturn state12(int startPos, char* string);
AutomataReturn state13(int startPos, char* string);
AutomataReturn state14(int startPos, char* string);
AutomataReturn state15(int startPos, char* string);
AutomataReturn state16(int startPos, char* string);
AutomataReturn state17(int startPos, char* string);
AutomataReturn state18(int startPos, char* string);
AutomataReturn state19(int startPos, char* string);
AutomataReturn state1a(int startPos, char* string);
AutomataReturn state1b(int startPos, char* string);
AutomataReturn state1c(int startPos, char* string);
AutomataReturn state1d(int startPos, char* string);
AutomataReturn state1e(int startPos, char* string);
AutomataReturn state1f(int startPos, char* string);
AutomataReturn state20(int startPos, char* string);
AutomataReturn state21(int startPos, char* string);
AutomataReturn state22(int startPos, char* string);
AutomataReturn state23(int startPos, char* string);
AutomataReturn state24(int startPos, char* string);
AutomataReturn state25(int startPos, char* string);
AutomataReturn state26(int startPos, char* string);
AutomataReturn state27(int startPos, char* string);
AutomataReturn state28(int startPos, char* string);
AutomataReturn state29(int startPos, char* string);
AutomataReturn state2a(int startPos, char* string);
AutomataReturn state2b(int startPos, char* string);
AutomataReturn state2c(int startPos, char* string);
AutomataReturn state2d(int startPos, char* string);
AutomataReturn state2e(int startPos, char* string);
AutomataReturn state2f(int startPos, char* string);
AutomataReturn state30(int startPos, char* string);
AutomataReturn state31(int startPos, char* string);
AutomataReturn state32(int startPos, char* string);
AutomataReturn state33(int startPos, char* string);
AutomataReturn state34(int startPos, char* string);
AutomataReturn state35(int startPos, char* string);
AutomataReturn state36(int startPos, char* string);
AutomataReturn state37(int startPos, char* string);
AutomataReturn state38(int startPos, char* string);
AutomataReturn state39(int startPos, char* string);
AutomataReturn state3a(int startPos, char* string);
AutomataReturn state3b(int startPos, char* string);
AutomataReturn state3c(int startPos, char* string);
AutomataReturn state3d(int startPos, char* string);
AutomataReturn state3e(int startPos, char* string);
AutomataReturn state3f(int startPos, char* string);
AutomataReturn state40(int startPos, char* string);
AutomataReturn state41(int startPos, char* string);
AutomataReturn state42(int startPos, char* string);
AutomataReturn state43(int startPos, char* string);
AutomataReturn state44(int startPos, char* string);
AutomataReturn state45(int startPos, char* string);
AutomataReturn state46(int startPos, char* string);
AutomataReturn state47(int startPos, char* string);
AutomataReturn state48(int startPos, char* string);
AutomataReturn state49(int startPos, char* string);
AutomataReturn state4a(int startPos, char* string);
AutomataReturn state4b(int startPos, char* string);
AutomataReturn state4c(int startPos, char* string);
AutomataReturn state4d(int startPos, char* string);
AutomataReturn state4e(int startPos, char* string);
AutomataReturn state4f(int startPos, char* string);
AutomataReturn state50(int startPos, char* string);
AutomataReturn state51(int startPos, char* string);
AutomataReturn state52(int startPos, char* string);
AutomataReturn state53(int startPos, char* string);
AutomataReturn state54(int startPos, char* string);
AutomataReturn state55(int startPos, char* string);
AutomataReturn state56(int startPos, char* string);
AutomataReturn state57(int startPos, char* string);
AutomataReturn state58(int startPos, char* string);
AutomataReturn state59(int startPos, char* string);
AutomataReturn state5a(int startPos, char* string);
AutomataReturn state5b(int startPos, char* string);
AutomataReturn state5c(int startPos, char* string);
AutomataReturn state5d(int startPos, char* string);
AutomataReturn state5e(int startPos, char* string);
AutomataReturn state5f(int startPos, char* string);
AutomataReturn state60(int startPos, char* string);
AutomataReturn state61(int startPos, char* string);
AutomataReturn state62(int startPos, char* string);
AutomataReturn state63(int startPos, char* string);
AutomataReturn state64(int startPos, char* string);
AutomataReturn state65(int startPos, char* string);
AutomataReturn state66(int startPos, char* string);
AutomataReturn state67(int startPos, char* string);
AutomataReturn state68(int startPos, char* string);
AutomataReturn state69(int startPos, char* string);
AutomataReturn state6a(int startPos, char* string);
AutomataReturn state6b(int startPos, char* string);
AutomataReturn state6d(int startPos, char* string);
AutomataReturn state6e(int startPos, char* string);
AutomataReturn state70(int startPos, char* string);
AutomataReturn state71(int startPos, char* string);
AutomataReturn state72(int startPos, char* string);
AutomataReturn state73(int startPos, char* string);
AutomataReturn state74(int startPos, char* string);
AutomataReturn statef0(int startPos, char* string);
AutomataReturn statef1(int startPos, char* string);
AutomataReturn statef2(int startPos, char* string);
AutomataReturn stateff(int startPos, char* string);
int isLetter(char a)
{
	return (a >= 'a' && a <= 'z') ||
	(a >= 'A' && a <= 'Z');
}
int isNum(char a)
{
	return (a>='0' && a<='9');
}
int isAlphanumerical(char a)
{
	return isNum(a) || isLetter(a);
}
int isOperator(char a)
{
	return a == '=' || a == '!' || a == '>' || a == '<' ||
	a == '+' || a == '-' || a == '/' || a == '\\' || a == '\'' ||
	a == '\"' || a == '{' || a == '}' || a == ':' || a == ';' || a == ','
	|| a == '(' || a == ')' || a == '*';
}
int isValidChar(char a)
{
	return isAlphanumerical(a) || isOperator(a) || a == ' ';
}
Lexeme* QueryAutomata(int* startPos, char* string)
{
	AutomataReturn aret = state00(*startPos, string);
	while(aret.state == 0xff)
	{
		*startPos = aret.lastPos;
		if(string[*startPos] == 0) return NULL;
		aret = state00(*startPos, string);
	}
	unsigned char extra = !aret.accepted;
	char* msg = malloc(sizeof(char)*(aret.lastPos-*startPos+extra));
	memcpy(msg, &string[*startPos], aret.lastPos-*startPos+extra);
	msg[aret.lastPos-*startPos+extra] = '\0';
	Lexeme* lex = malloc(sizeof(Lexeme));
	lex->lexID = aret.lexID;
	lex->string = msg;
	lex->error = !aret.accepted;
	*startPos = aret.lastPos;
	return lex;
}
void printLexeme(Lexeme* lex)
{
	if(lex->error) printf("Erro lexico. O seguinte texto foi rejeitado: \"%s\"\n", lex->string);
	else printf("<%d, %s>\n", lex->lexID, lex->string);
}
AutomataReturn state00(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'c':
		{
			return state01(startPos+1, string);
		}
		case 'd':
		{
			return state13(startPos+1, string);
		}
		case 'e':
		{
			return state19(startPos+1, string);
		}
		case 'f':
		{
			return state1d(startPos+1, string);
		}
		case 'i':
		{
			return state26(startPos+1, string);
		}
		case 'm':
		{
			return state32(startPos+1, string);
		}
		case 'r':
		{
			return state36(startPos+1, string);
		}
		case 's':
		{
			return state3c(startPos+1, string);
		}
		case 'v':
		{
			return state42(startPos+1, string);
		}
		case 'w':
		{
			return state46(startPos+1, string);
		}
		case '0':
		{
			return state4b(startPos+1, string);
		}
		case '1' ... '9':
		{
			return state50(startPos+1, string);
		}
		case '-':
		{
			return state53(startPos+1, string);
		}
		case '>':
		{
			return state55(startPos+1, string);
		}
		case '=':
		{
			return state58(startPos+1, string);
		}
		case '<':
		{
			return state5a(startPos+1, string);
		}
		case '+':
		{
			return state5d(startPos+1, string);
		}
		case '}':
		{
			return state5f(startPos+1, string);
		}
		case '{':
		{
			return state60(startPos+1, string);
		}
		case ';':
		{
			return state61(startPos+1, string);
		}
		case ':':
		{
			return state62(startPos+1, string);
		}
		case '/':
		{
			return state63(startPos+1, string);
		}
		case ',':
		{
			return state64(startPos+1, string);
		}
		case '*':
		{
			return state65(startPos+1, string);
		}
		case ')':
		{
			return state66(startPos+1, string);
		}
		case '(':
		{
			return state67(startPos+1, string);
		}
		case '!':
		{
			return state68(startPos+1, string);
		}
		case '\"':
		{
			return state6b(startPos+1, string);
		}
		case '~':
		{
			return state6e(startPos+1, string);
		}
		case '\'':
		{
			return state71(startPos+1, string);
		}
		case ' ': 
		case '\n':
		case '\r':
		case '\t':
		{
			return stateff(startPos+1, string);
		}
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
		}
	}
}
AutomataReturn state01(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'a':
		{
			return state02(startPos+1, string);
		}
		case 'h':
		{
			return state0b(startPos+1, string);
		}
		case 'i':
		{
			return state0e(startPos+1, string);
		}
		case 'o':
		{
			return state10(startPos+1, string);
		}
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x01;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state02(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'l':
		{
			return state03(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x02;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state03(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'l':
		{
			return state04(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x03;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state04(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'f':
		{
			return state05(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x04;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state05(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'u':
		{
			return state06(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x05;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state06(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'n':
		{
			return state07(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x06;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state07(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'c':
		{
			return state08(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x07;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state08(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'a':
		{
			return state09(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x08;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state09(int startPos, char* string)
{

	switch(string[startPos])
	{
		case 'o':
		{
			return state0a(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x09;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state0a(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x0a;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 27;
		return ret;
	}
}
AutomataReturn state0b(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'a':
		{
			return state0c(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x0b;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state0c(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'r':
		{
			return state0d(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x0c;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state0d(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x0d;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 26;
		return ret;
	}
}
AutomataReturn state0e(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'n':
		{
			return state0f(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x0e;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state0f(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x0f;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 25;
		return ret;
	}
}
AutomataReturn state10(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'u':
		{
			return state11(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x10;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state11(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 't':
		{
			return state12(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x11;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state12(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x12;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 24;
		return ret;
	}
}
AutomataReturn state13(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'o':
		{
			return state14(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x13;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state14(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'u':
		{
			return state15(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x14;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = 23;
				return ret;
			}
		}
	}
}
AutomataReturn state15(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'b':
		{
			return state16(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x15;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state16(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'l':
		{
			return state17(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x16;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state17(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'e':
		{
			return state18(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x17;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state18(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x18;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 22;
		return ret;
	}
}
AutomataReturn state19(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'l':
		{
			return state20(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x19;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state1a(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 's':
		{
			return state1b(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x1a;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state1b(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'e':
		{
			return state1c(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x1b;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state1c(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x1c;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 21;
		return ret;
	}
}
AutomataReturn state1d(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'i':
		{
			return state1e(startPos+1, string);
		}
		case 'l':
		{
			return state20(startPos+1, string);
		}	
		case 'o':
		{
			return state24(startPos+1, string);
		}
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x1d;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state1e(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'm':
		{
			return state1f(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x1e;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state1f(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x1f;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 20;
		return ret;
	}
}
AutomataReturn state20(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'o':
		{
			return state21(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x20;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state21(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'a':
		{
			return state22(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x21;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state22(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 't':
		{
			return state23(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x22;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state23(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x23;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 19;
		return ret;
	}
}
AutomataReturn state24(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'r':
		{
			return state25(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x24;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state25(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x25;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 18;
		return ret;
	}
}
AutomataReturn state26(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'f':
		{
			return state27(startPos+1, string);
		}
		case 'n':
		{
			return state28(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x26;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state27(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x27;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 18;
		return ret;
	}
}
AutomataReturn state28(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'i':
		{
			return state29(startPos+1, string);
		}
		case 't':
		{
			return state2d(startPos+1, string);
		}
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x28;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state29(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'c':
		{
			return state2a(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x29;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state2a(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'i':
		{
			return state2b(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x2a;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state2b(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'o':
		{
			return state2c(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x2b;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state2c(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x2c;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 15;
		return ret;
	}
}
AutomataReturn state2d(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'e':
		{
			return state2e(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x2d;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state2e(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'g':
		{
			return state2f(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x2e;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state2f(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'e':
		{
			return state30(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x2f;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state30(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'r':
		{
			return state31(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x30;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state31(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x2c;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 13;
		return ret;
	}
}
AutomataReturn state32(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'a':
		{
			return state33(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x33;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state33(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'i':
		{
			return state34(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x33;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state34(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'n':
		{
			return state35(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x34;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state35(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x35;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 11;
		return ret;
	}
}
AutomataReturn state36(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'e':
		{
			return state37(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x36;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state37(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 't':
		{
			return state38(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x37;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state38(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'u':
		{
			return state39(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x38;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state39(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'r':
		{
			return state3a(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x39;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state3a(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'n':
		{
			return state3b(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x3a;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state3b(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x3b;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 4;
		return ret;
	}
}
AutomataReturn state3c(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 't':
		{
			return state3d(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x3c;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state3d(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'r':
		{
			return state3e(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x3d;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state3e(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'i':
		{
			return state3f(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x3e;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state3f(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'n':
		{
			return state40(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x3f;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state40(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'g':
		{
			return state41(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x40;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state41(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x41;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 3;
		return ret;
	}
}
AutomataReturn state42(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'o':
		{
			return state43(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x42;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state43(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'i':
		{
			return state44(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x43;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state44(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'd':
		{
			return state45(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x44;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state45(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x45;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 2;
		return ret;
	}
}
AutomataReturn state46(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'h':
		{
			return state47(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x46;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state47(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'i':
		{
			return state48(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x47;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state48(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'l':
		{
			return state49(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x48;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state49(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'e':
		{
			return state4a(startPos+1, string);
		}	
		default:
		{
			if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
			else
			{
				AutomataReturn ret;
				ret.state = 0x4a;
				ret.accepted = 1;
				ret.lastPos = startPos;
				ret.lexID = RESERVED_STAGE_LEX_ID;
				return ret;
			}
		}
	}
}
AutomataReturn state4a(int startPos, char* string)
{
	if(isAlphanumerical(string[startPos])) return state6a(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x4a;
		ret.accepted = 1;
		ret.lastPos = startPos;
		ret.lexID = 1;
		return ret;
	}
}
AutomataReturn state4b(int startPos, char* string)
{
	switch(string[startPos])
	{
		case 'b':
		{
			return state4c(startPos+1, string);
		}
		case 'x':
		{
			return state4e(startPos+1, string);
		}
		case '0' ... '9':
		{
			return state50(startPos+1, string);
		}
		default:
		{
			AutomataReturn ret;
			ret.state = 0x4b;
			ret.accepted = 1;
			ret.lastPos = startPos;
			ret.lexID = 5;
			return ret;
		}
	}
}
AutomataReturn state4c(int startPos, char* string)
{
	if(string[startPos] == '0' || string[startPos] == '1') return state4d(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x4c;
		ret.accepted = 0;
		ret.lastPos = startPos;
		ret.lexID = -1;
		return ret;
	}
}
AutomataReturn state4d(int startPos, char* string)
{
	while(string[startPos] == '0' || string[startPos] == '1') startPos++;
	AutomataReturn ret;
	ret.state = 0x4d;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 5;
	return ret;
}
AutomataReturn state4e(int startPos, char* string)
{
	if((string[startPos] >= '0' && string[startPos] <= '9') || 
	   (string[startPos] >= 'a' && string[startPos] <= 'f') ||
           (string[startPos] >= 'A' && string[startPos] <= 'F')) return state4f(startPos+1, string);
	else
	{
		AutomataReturn ret;
		ret.state = 0x4e;
		ret.accepted = 0;
		ret.lastPos = startPos;
		ret.lexID = -1;
		return ret;
	}
}
AutomataReturn state4f(int startPos, char* string)
{
	while((string[startPos] >= '0' && string[startPos] <= '9') || 
	   (string[startPos] >= 'a' && string[startPos] <= 'f') ||
           (string[startPos] >= 'A' && string[startPos] <= 'F')) startPos++;
	AutomataReturn ret;
	ret.state = 0x4f;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 5;
	return ret;
}
AutomataReturn state50(int startPos, char* string)
{
	while((string[startPos] >= '0' && string[startPos] <= '9')) startPos++;
	if(string[startPos] == '.') return state51(startPos+1, string);
	AutomataReturn ret;
	ret.state = 0x50;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 5;
	return ret;
}
AutomataReturn state51(int startPos, char* string)
{
	if((string[startPos] >= '0' && string[startPos] <= '9')) return state52(startPos+1, string);
	AutomataReturn ret;
	ret.state = 0x51;
	ret.accepted = 0;
	ret.lastPos = startPos;
	ret.lexID = -1;
	return ret;
}
AutomataReturn state52(int startPos, char* string)
{
	while((string[startPos] >= '0' && string[startPos] <= '9')) startPos++;
	AutomataReturn ret;
	ret.state = 0x52;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 6;
	return ret;
}
AutomataReturn state53(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '0':
		{
			return state4b(startPos+1, string);
		}
		case '1' ... '9':
		{
			return state50(startPos+1, string);
		}
		case '-':
		{
			return state54(startPos+1, string);
		}
		default:
		{	
			AutomataReturn ret;
			ret.state = 0x53;
			ret.accepted = 1;
			ret.lastPos = startPos;
			ret.lexID = 50;
			return ret;
		}
	}
}
AutomataReturn state54(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x54;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 49;
	return ret;
}
AutomataReturn state55(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '>':
		{
			return state56(startPos+1, string);
		}
		case '=':
		{
			return state57(startPos+1, string);
		}
		default:
		{	
			AutomataReturn ret;
			ret.state = 0x55;
			ret.accepted = 1;
			ret.lastPos = startPos;
			ret.lexID = 30;
			return ret;
		}
	}
}
AutomataReturn state56(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x56;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 28;
	return ret;
}
AutomataReturn state57(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x57;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 29;
	return ret;
}
AutomataReturn state58(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '=':
		{
			return state59(startPos+1, string);
		}
		default:
		{	
			AutomataReturn ret;
			ret.state = 0x58;
			ret.accepted = 1;
			ret.lastPos = startPos;
			ret.lexID = 32;
			return ret;
		}
	}
}
AutomataReturn state59(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x59;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 31;
	return ret;
}
AutomataReturn state5a(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '<':
		{
			return state5b(startPos+1, string);
		}
		case '=':
		{
			return state5c(startPos+1, string);
		}
		default:
		{	
			AutomataReturn ret;
			ret.state = 0x5a;
			ret.accepted = 1;
			ret.lastPos = startPos;
			ret.lexID = 35;
			return ret;
		}
	}
}
AutomataReturn state5b(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x5b;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 34;
	return ret;
}
AutomataReturn state5c(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x5c;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 33;
	return ret;
}
AutomataReturn state5d(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '+':
		{
			return state5e(startPos+1, string);
		}
		default:
		{	
			AutomataReturn ret;
			ret.state = 0x5d;
			ret.accepted = 1;
			ret.lastPos = startPos;
			ret.lexID = 37;
			return ret;
		}
	}
}
AutomataReturn state5e(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x5e;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 36;
	return ret;
}
AutomataReturn state5f(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x5f;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 38;
	return ret;
}
AutomataReturn state60(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x60;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 39;
	return ret;
}
AutomataReturn state61(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x61;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 40;
	return ret;
}
AutomataReturn state62(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x62;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 41;
	return ret;
}
AutomataReturn state63(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '/':
		{
			return statef0(startPos+1, string);
		}
		case '*':
		{
			return statef1(startPos+1, string);
		}
		default:
		{	
			AutomataReturn ret;
			ret.state = 0x63;
			ret.accepted = 1;
			ret.lastPos = startPos;
			ret.lexID = 42;
			return ret;
		}
	}
}
AutomataReturn state64(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x64;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 43;
	return ret;
}
AutomataReturn state65(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x65;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 44;
	return ret;
}
AutomataReturn state66(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x66;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 45;
	return ret;
}
AutomataReturn state67(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x67;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 46;
	return ret;
}
AutomataReturn state68(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '=':
		{
			return state69(startPos+1, string);
		}
		default:
		{	
			AutomataReturn ret;
			ret.state = 0x68;
			ret.accepted = 0;
			ret.lastPos = startPos;
			ret.lexID = -1;
			return ret;
		}
	}
}
AutomataReturn state69(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x69;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 48;
	return ret;
}
AutomataReturn state6a(int startPos, char* string)
{
	while(isAlphanumerical(string[startPos])) startPos++;
	AutomataReturn ret;
	ret.state = 0x6a;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 7;
	return ret;
}
AutomataReturn state6b(int startPos, char* string)
{
	while(isValidChar(string[startPos]) && string[startPos] != '\"') 
	{
		if(string[startPos] == '\\') startPos++;
		startPos++;
	}
	switch(string[startPos])
	{
		case '\"': return state6d(startPos+1, string);
		default:
		{
			AutomataReturn ret;
			ret.state = 0x6b;
			ret.accepted = 0;
			ret.lastPos = startPos;
			ret.lexID = -1;
			return ret;
		}
	}
}
AutomataReturn state6d(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x6d;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 10;
	return ret;
}
AutomataReturn state6e(int startPos, char* string)
{
	while(isValidChar(string[startPos]) && string[startPos] != '\"') 
	{
		if(string[startPos] == '\\') startPos++;
		startPos++;
	}
	switch(string[startPos])
	{
		case '~': return state70(startPos+1, string);
		default:
		{
			AutomataReturn ret;
			ret.state = 0x6e;
			ret.accepted = 0;
			ret.lastPos = startPos;
			ret.lexID = -1;
			return ret;
		}
	}
}
AutomataReturn state70(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x70;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 12;
	return ret;
}
AutomataReturn state71(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '\\': return state73(startPos+1, string);
		case '\'': return state74(startPos+1, string);
		default:
		{
			if(isValidChar(string[startPos])) return state72(startPos+1, string);
			AutomataReturn ret;
			ret.state = 0x71;
			ret.accepted = 0;
			ret.lastPos = startPos;
			ret.lexID = -1;
			return ret;
		}
	}
}
AutomataReturn state72(int startPos, char* string)
{
	switch(string[startPos])
	{
		case '\'': return state74(startPos+1, string);
		default:
		{
			AutomataReturn ret;
			ret.state = 0x72;
			ret.accepted = 0;
			ret.lastPos = startPos;
			ret.lexID = -1;
			return ret;
		}
	}
}
AutomataReturn state73(int startPos, char* string)
{
	if(isValidChar(string[startPos])) return state72(startPos+1, string);
	AutomataReturn ret;
	ret.state = 0x73;
	ret.accepted = 0;
	ret.lastPos = startPos;
	ret.lexID = -1;
	return ret;
}
AutomataReturn state74(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0x74;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 8;
	return ret;
}
AutomataReturn statef0(int startPos, char* string)
{
	while(string[startPos] != '\n') startPos++;
	return stateff(startPos+1, string);
}
AutomataReturn statef1(int startPos, char* string)
{
	while(string[startPos] != '*') startPos++;
	return statef2(startPos+1, string);
}
AutomataReturn statef2(int startPos, char* string)
{
	if(string[startPos] == '/') return stateff(startPos+1, string);
	AutomataReturn ret;
	ret.state = 0xf2;
	ret.accepted = 0;
	ret.lastPos = startPos;
	ret.lexID = -1;
	return ret;
}
AutomataReturn stateff(int startPos, char* string)
{
	AutomataReturn ret;
	ret.state = 0xff;
	ret.accepted = 1;
	ret.lastPos = startPos;
	ret.lexID = 0xff;
	return ret;
}
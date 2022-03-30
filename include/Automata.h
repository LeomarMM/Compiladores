#ifndef AUTOMATA_INCLUDED
#define AUTOMATA_INCLUDED

typedef struct
{
	unsigned char lexID;
	unsigned char error;
	char* string;
} Lexeme;

Lexeme* QueryAutomata(int* startPos, char* string);
void printLexeme(Lexeme* lex);
#endif
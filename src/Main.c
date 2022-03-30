#include "../include/Automata.h"
#include <stdio.h>
#include <stdlib.h>
char* read_file(char* filename);
void main()
{
	int i = 0;
	char path[256];
	printf("Digite o nome do arquivo a analisar: ");
	scanf("%s", path);
	char* str = read_file(path);
	while(str[i])
	{
		Lexeme* lex = QueryAutomata(&i, str);
		if(lex == NULL) break;
		printLexeme(lex);
		if(lex -> error) break;
	}
}
char* read_file(char* filename)
{
	FILE* f = fopen(filename, "rb");
	if(f == NULL)
	{
		return NULL;
	}
	fseek(f, 0, SEEK_END);
	int fsize = ftell(f);
	char* filecontents = (char*)malloc((fsize + 1) * sizeof(char));
	if(filecontents == NULL)
	{
		fclose(f);
		return NULL;
	}
	rewind(f);
	fread(filecontents, sizeof(char), fsize, f);
	fclose(f);
	filecontents[fsize] = 0;
	return filecontents;
}
#include <stdio.h>
#include <stdlib.h>
#define ROWS 33
#define COLS 51
#define BUF_SZ 5
unsigned short parse[ROWS][COLS];
char buf[BUF_SZ];
int bufctr = 0;
char* read_file(char* filename);
void clearBuffer();
void main()
{
    char* parsingText = read_file("parsing.csv");
    clearBuffer();
    int row=0, column=0, i = 0;
    while(parsingText[i] != 0)
    {
        if(parsingText[i] == ';' || parsingText[i] == ',') 
        {
            parse[row][column] = atoi(buf);
            clearBuffer();
            column++;
        }
        else if(parsingText[i] == '\n') 
        {
            parse[row][column] = atoi(buf);
            clearBuffer();
            row++;
            column=0;
        }
        else
        {
            buf[bufctr]=parsingText[i];
            bufctr++;    
        }
        i++;
    }
    printf("const unsigned short parsingTable[][3] = {\n");
    for(i = 1; i < ROWS;i++)
    {
        int j;
        for(j = 1; j < COLS;j++)
        {
            if(parse[i][j] != 0)
            {
                printf("\t{%i, %i, %i}", parse[i][0], parse[0][j], parse[i][j]);
                printf(",\n");
            }
        }
    }
    printf("};");
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
void clearBuffer()
{
    int i;
    for(i = 0; i < BUF_SZ; i++) buf[i] = 0;
    bufctr = 0;
}
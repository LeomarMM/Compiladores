#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../include/automata.h"
#define RANGE_TOKEN 1
#define GLOBAL 2
#define GLOBAL_VC 4
#define RANGE_STATE_TOKEN 3
#define TRANSITION_TABLE_SZ 196
#define STATE_TABLE_SZ 50
#define RANGED_STATE_TABLE_SZ 1
#define IGNORE_TOKEN 255
#define ERROR_TOKEN 254
#define EOF_TOKEN 253
const unsigned short transition_table[][3] = {
    {0x00, 0x01, 'c'},
    {0x00, 0x13, 'd'},
    {0x00, 0x19, 'e'},
    {0x00, 0x1D, 'f'},
    {0x00, 0x26, 'i'},
    {0x00, 0x32, 'm'},
    {0x00, 0x36, 'r'},
    {0x00, 0x3C, 's'},
    {0x00, 0x42, 'v'},
    {0x00, 0x46, 'w'},
    {0x00, 0x4B, '0'},
    
    {0x00, 0x50, RANGE_TOKEN},
    {0x00, 0x50, '0'},
    {0x00, 0x50, '9'},

    {0x00, 0x53, '-'},
    {0x00, 0x55, '>'},
    {0x00, 0x58, '='},
    {0x00, 0x5A, '<'},
    {0x00, 0x5D, '+'},
    {0x00, 0x5F, '}'},
    {0x00, 0x60, '{'},
    {0x00, 0x61, ';'},
    {0x00, 0x62, ':'},
    {0x00, 0x63, '/'},
    {0x00, 0x64, ','},
    {0x00, 0x65, '*'},
    {0x00, 0x66, ')'},
    {0x00, 0x67, '('},
    {0x00, 0x68, '!'},
    {0x00, 0xFF, '\n'},
    {0x00, 0xFF, '\r'},
    {0x00, 0xFF, '\t'},
	{0x00, 0xFF, ' '},

    {0x00, 0x6A, RANGE_TOKEN},
    {0x00, 0x6A, 'A'},
    {0x00, 0x6A, 'Z'},

    {0x00, 0x6A, RANGE_TOKEN},
    {0x00, 0x6A, 'a'},
    {0x00, 0x6A, 'z'},

    {0x00, 0x6B, '"'},
    {0x00, 0x6E, '~'},
    {0x00, 0x71, '\''},
    {0x01, 0x02, 'a'},
    {0x01, 0x0B, 'h'},
    {0x01, 0x0E, 'i'},
    {0x01, 0x10, 'o'},
    {0x02, 0x03, 'l'},
    {0x03, 0x04, 'l'},
    {0x04, 0x05, 'f'},
    {0x05, 0x06, 'u'},
    {0x06, 0x07, 'n'},
    {0x07, 0x08, 'c'},
    {0x08, 0x09, 'a'},
    {0x09, 0x0A, 'o'},
    {0x0B, 0x0C, 'a'},
    {0x0C, 0x0D, 'r'},
    {0x0E, 0x0F, 'n'},
    {0x10, 0x11, 'u'},
    {0x11, 0x12, 't'},
    {0x13, 0x14, 'o'},
    {0x14, 0x15, 'u'},
    {0x15, 0x16, 'b'},
    {0x16, 0x17, 'l'},
    {0x17, 0x18, 'e'},
    {0x19, 0x1A, 'l'},
    {0x1A, 0x1B, 's'},
    {0x1B, 0x1C, 'e'},
    {0x1D, 0x1E, 'i'},
    {0x1D, 0x20, 'l'},
    {0x1D, 0x24, 'o'},
    {0x1E, 0x1F, 'm'},
    {0x20, 0x21, 'o'},
    {0x21, 0x22, 'a'},
    {0x22, 0x23, 't'},
    {0x24, 0x25, 'r'},
    {0x26, 0x27, 'f'},
    {0x26, 0x28, 'n'},
    {0x28, 0x29, 'i'},
    {0x28, 0x2D, 't'},
    {0x29, 0x2A, 'c'},
    {0x2A, 0x2B, 'i'},
    {0x2B, 0x2C, 'o'},
    {0x2D, 0x2E, 'e'},
    {0x2E, 0x2F, 'g'},
    {0x2F, 0x30, 'e'},
    {0x30, 0x31, 'r'},
    {0x32, 0x33, 'a'},
    {0x33, 0x34, 'i'},
    {0x34, 0x35, 'n'},
    {0x36, 0x37, 'e'},
    {0x37, 0x38, 't'},
    {0x38, 0x39, 'u'},
    {0x39, 0x3A, 'r'},
    {0x3A, 0x3B, 'n'},
    {0x3C, 0x3D, 't'},
    {0x3D, 0x3E, 'r'},
    {0x3E, 0x3F, 'i'},
    {0x3F, 0x40, 'n'},
    {0x40, 0x41, 'g'},
    {0x42, 0x43, 'o'},
    {0x43, 0x44, 'i'},
    {0x44, 0x45, 'd'},
    {0x46, 0x47, 'h'},
    {0x47, 0x48, 'i'},
    {0x48, 0x49, 'l'},
    {0x49, 0x4A, 'e'},
    {0x4B, 0x4C, 'b'},
    {0x4B, 0x4E, 'x'},
    
    {0x4B, 0x50, RANGE_TOKEN},
    {0x4B, 0x50, '0'},
    {0x4B, 0x50, '9'},

    {0x4B, 0x51, '.'},
    
    {0x4C, 0x4D, '0'},
    {0x4C, 0x4D, '1'},
    {0x4D, 0x4D, '0'},
    {0x4D, 0x4D, '1'},

    {0x4E, 0x4F, RANGE_TOKEN},
    {0x4E, 0x4F, '0'},
    {0x4E, 0x4F, '9'},

    {0x4E, 0x4F, RANGE_TOKEN},
    {0x4E, 0x4F, 'A'},
    {0x4E, 0x4F, 'F'},

    {0x4E, 0x4F, RANGE_TOKEN},
    {0x4E, 0x4F, 'a'},
    {0x4E, 0x4F, 'f'},

    {0x4F, 0x4F, RANGE_TOKEN},
    {0x4F, 0x4F, '0'},
    {0x4F, 0x4F, '9'},

    {0x4F, 0x4F, RANGE_TOKEN},
    {0x4F, 0x4F, 'A'},
    {0x4F, 0x4F, 'F'},

    {0x4F, 0x4F, RANGE_TOKEN},
    {0x4F, 0x4F, 'a'},
    {0x4F, 0x4F, 'f'},

    {0x50, 0x50, RANGE_TOKEN},
    {0x50, 0x50, '0'},
    {0x50, 0x50, '9'},

    {0x50, 0x51, '.'},

    {0x51, 0x52, RANGE_TOKEN},
    {0x51, 0x52, '0'},
    {0x51, 0x52, '9'},

    {0x52, 0x52, RANGE_TOKEN},
    {0x52, 0x52, '0'},
    {0x52, 0x52, '9'},

    {0x53, 0x4B, '0'},
    
    {0x53, 0x50, RANGE_TOKEN},
    {0x53, 0x50, '0'},
    {0x53, 0x50, '9'},

    {0x53, 0x54, '-'},
    {0x55, 0x56, '>'},
    {0x55, 0x57, '='},
    {0x58, 0x59, '='},
    {0x5A, 0x5B, '<'},
    {0x5A, 0x5C, '='},
    {0x5D, 0x5E, '+'},
    {0x63, 0xF0, '/'},
    {0x63, 0xF1, '*'},
    {0x68, 0x69, '='},

    {0x6A, 0x6A, RANGE_TOKEN},
    {0x6A, 0x6A, '0'},
    {0x6A, 0x6A, '9'},

    {0x6A, 0x6A, RANGE_TOKEN},
    {0x6A, 0x6A, 'A'},
    {0x6A, 0x6A, 'Z'},

    {0x6A, 0x6A, RANGE_TOKEN},
    {0x6A, 0x6A, 'a'},
    {0x6A, 0x6A, 'z'},


    {0x6B, 0x6C, '\\'},
    {0x6B, 0x6D, '"'},
    {0x6B, 0x6B, GLOBAL_VC},
    {0x6C, 0x6B, GLOBAL_VC},
    {0x6E, 0x6F, '\\'},
    {0x6E, 0x70, '~'},
    {0x6E, 0x6E, GLOBAL_VC},
    {0x6F, 0x6E, GLOBAL_VC},
    {0x71, 0x74, '\''},
    {0x71, 0x73, '\\'},
    {0x71, 0x72, GLOBAL_VC},
    {0x72, 0x74, '\''},
    {0x73, 0x72, GLOBAL_VC},
    {0xF0, 0xFF, '\n'},
    {0xF0, 0xF0, GLOBAL},
    {0xF1, 0xF2, '*'},
    {0xF1, 0xF1, GLOBAL},
    {0xF2, 0xFF, '/'},

    {0x01, 0x4A, RANGE_STATE_TOKEN},
    {0x00, 0x6A, RANGE_TOKEN},
    {0x00, 0x6A, '0'},
    {0x00, 0x6A, '9'},

    {0x01, 0x4A, RANGE_STATE_TOKEN},
    {0x00, 0x6A, RANGE_TOKEN},
    {0x00, 0x6A, 'A'},
    {0x00, 0x6A, 'Z'},

    {0x01, 0x4A, RANGE_STATE_TOKEN},
    {0x00, 0x6A, RANGE_TOKEN},
    {0x00, 0x6A, 'a'},
    {0x00, 0x6A, 'z'}
};
const unsigned short accepting_states[][2] = {
    {0x0A, 27},
    {0x0D, 26},
    {0x0F, 25},
    {0x12, 24},
    {0x14, 23},
    {0x1C, 21},
    {0x1F, 20},
    {0x23, 19},
    {0x25, 18},
    {0x27, 16},
    {0x2C, 15},
    {0x31, 13},
    {0x35, 11},
    {0x3B, 4},
    {0x41, 3},
    {0x45, 2},
    {0x4A, 1},
    {0x4B, 5},
    {0x4D, 5},
    {0x4F, 5},
    {0x50, 5},
    {0x52, 6},
    {0x53, 50},
    {0x54, 49},
    {0x55, 30},
    {0x56, 28},
    {0x57, 29},
    {0x58, 32},
    {0x59, 31},
    {0x5A, 35},
    {0x5B, 34},
    {0x5C, 33},
    {0x5D, 37},
    {0x5E, 36},
    {0x5F, 38},
    {0x60, 39},
    {0x61, 40},
    {0x62, 41},
    {0x63, 42},
    {0x64, 43},
    {0x65, 44},
    {0x66, 45},
    {0x67, 46},
    {0x69, 48},
    {0x6A, 7},
    {0x6D, 10},
    {0x70, 12},
    {0x74, 8},
    {0xE0, ERROR_TOKEN},
    {0xFF, IGNORE_TOKEN}
};
const unsigned short range_accepting_states[][3] = {
    {0x01, 0x4A, 7}
};
int isValidChar(char a)
{
	return (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a>='0' && a<='9') || 
    a == '=' || a == '!' || a == '>' || a == '<' ||
	a == '+' || a == '-' || a == '/' || a == '\\' || a == '\'' ||
	a == '\"' || a == '{' || a == '}' || a == ':' || a == ';' || 
    a == ',' || a == '(' || a == ')' || a == '*' || a == ' ';
}
unsigned short next_state(unsigned short current_state, char ch)
{
    int i;
    for(i = 0; i < TRANSITION_TABLE_SZ; i++)
    {
        if(transition_table[i][2] == RANGE_STATE_TOKEN)
        {
            unsigned short start = transition_table[i][0], end = transition_table[i][1];
            i++;
            if(current_state < start || current_state > end) 
            {
                if(transition_table[i][2] == RANGE_TOKEN) i += 2;
                continue;
            }
        }
        else if(transition_table[i][0] != current_state) continue;
        if(transition_table[i][2] == RANGE_TOKEN)
        {
            if(ch >= transition_table[i+1][2] && ch <= transition_table[i+2][2]) return transition_table[i][1];
            i += 2;
        }
        else if((transition_table[i][2] == GLOBAL) || transition_table[i][2] == ch) return transition_table[i][1];
        else if((transition_table[i][2] == GLOBAL_VC && isValidChar(ch)) || transition_table[i][2] == ch) return transition_table[i][1];
    }
    return 0;
}
unsigned short final_state(unsigned short current_state)
{
    int i;
    for(i = 0; i < STATE_TABLE_SZ; i++) if(accepting_states[i][0] == current_state) return accepting_states[i][1];
    for(i = 0; i < RANGED_STATE_TABLE_SZ; i++)
        if(current_state >= range_accepting_states[i][0] && current_state <= range_accepting_states[i][1]) return range_accepting_states[i][2];
    return 0;
}
unsigned short run_automata(char* string, int* start_pos)
{
    int current_state = 0;
    if(string[(*start_pos)] == 0) return EOF_TOKEN;
    while(1)
    {
        unsigned short n_state = next_state(current_state, string[*start_pos]);
        if(n_state == 0) 
        {
            unsigned short f_val = final_state(current_state);
            if(f_val == 0) return ERROR_TOKEN;
            return f_val;
        }
        else 
		{
			current_state = n_state;
			(*start_pos)++;
		}
    }
    return ERROR_TOKEN;
}
token_t* query_automata(int* start_pos, char* string)
{
	token_t* lex;
	short begin;
	short extra;
	char* msg;
	int saved_sp = *start_pos;
	unsigned short aret = run_automata(string, start_pos);
	while(aret == IGNORE_TOKEN)
	{
		if(string[*start_pos] == 0) return NULL;
		saved_sp = *start_pos;
		aret = run_automata(string, start_pos);
	}
	begin = (aret == 8) || (aret == 10) || (aret == 12);
	extra = (aret == ERROR_TOKEN) - begin;
	msg = malloc(sizeof(char)*(*start_pos-saved_sp+extra-begin));
	memcpy(msg, &string[saved_sp]+begin, *start_pos-saved_sp+extra-begin);
	msg[*start_pos-saved_sp+extra-begin] = '\0';
	lex = malloc(sizeof(token_t));
	lex->token_id = aret;
	lex->string = msg;
	lex->error = (aret == ERROR_TOKEN);
	return lex;
}
void print_token(token_t* lex)
{
	if(lex->error) printf("Erro lexico. O seguinte texto foi rejeitado: \"%s\"\n", lex->string);
	else printf("<%d, %s>\n", lex->token_id, lex->string);
}
void fprint_token(void* file, token_t* lex)
{
	if(lex->error) fprintf(file, "Erro lexico. O seguinte texto foi rejeitado: \"%s\"", lex->string);
	else fprintf(file, "<%d, %s>", lex->token_id, lex->string);
}
void free_token(token_t* tok)
{
    free(tok);
}
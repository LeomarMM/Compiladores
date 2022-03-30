#ifndef AUTOMATA_INCLUDED
#define AUTOMATA_INCLUDED

typedef struct
{
	unsigned short token_id;
	unsigned short error;
	char* string;
} token_t;

token_t* query_automata(int*, char*);
void print_token(token_t*);
void fprint_token(void*, token_t*);

#endif

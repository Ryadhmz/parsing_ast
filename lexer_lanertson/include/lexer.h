#ifndef TAC_LEXER_H
#define TAC_LEXER_H
#include "token.h"
#include <string.h>
#include <stdio.h>

typedef struct LEXER_STRUCT
{
	char *src;
	unsigned int src_size;
	char c; // current carac
	unsigned int i; // index
} lexer_T;

lexer_T* init_lexer(char *src);
void lexer_advance(lexer_T* lexer);
token_T* lexer_next_token(lexer_T* lexer);
void lexer_skip_whitespace(lexer_T* lexer);

#endif

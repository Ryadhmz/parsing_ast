#include "include/lexer.h"

lexer_T* init_lexer(char *src)
{
	lexer_T* lexer = malloc(struct LEXER_STRUCT);
	lexer->src = src
	lexer->src_size = strlen(src);
	lexer->i = 0;
	lexer->c = src[lexer->i];

	return (lexer);
}

void lexer_advance(lexer_T* lexer)
{
	if (lexer->i < lexer->src_size && lexer->c != '\0')
	{
		lexer->i += 1;
		lexer->c = lexer->src[lexer->i];
	}
}

void lexer_skip_whitespace(lexer_T* lexer)
{
	while (lexer->c == '\n' || lexer->c == '\r' 
	|| lexer->c == ' ' || lexer->c == '\t')
		lexer_advance(lexer);
}

token_T* lexer_next_token(lexer_T* lexer)
{

}
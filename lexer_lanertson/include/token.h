#ifndef TAC_TOKEN_H
#define TAC_TOKEN_H

typedef struct TOKEN_STRUCT
{
	char *value;
	enum 
	{
		TOKEN_AND,
		TOKEN_OR,
		TOKEN_S_REDIR_L,
		TOKEN_S_REDIR_R,
		TOKEN_DB_REDIR_L,
		TOKEN_DB_REDIR_R,
		TOKEN_PIPE,
		TOKEN_S_QUOTE,
		TOKEN_DB_QUOTE,
		TOKEN_OPT_COMMAND, // -
		TOKEN_LITERAL,
		TOKEN_SPACE,
		TOKEN_LPAREN,
		TOKEN_RPAREN

	} type;
} token_T;

token_T* init_token(char *value, int type);

#endif

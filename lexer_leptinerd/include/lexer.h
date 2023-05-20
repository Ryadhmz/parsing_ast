#ifndef AST_LEXER
#define AST_LEXER

typedef struct LEXER_STACK
{
	char c;
	struct LEXER_STACK *next;
} l_stack;

typedef struct FLUX
{
	char *str;
	char c;
	int i;
} l_flux;

void push_char_in_stack(char c, l_stack **stack);
void flush_stack(l_stack **stack);
int is_acceptor(char c);
void init_flux(l_flux** flux);
char flux_next_char(char *str);

#endif
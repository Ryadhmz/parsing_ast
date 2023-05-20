#ifndef AST_LINKED_LIST
#define AST_LINKED_LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct TOKEN_STRUCT
{
	char *token;
	struct TOKEN_STRUCT *next;
} token_list;

token_list *create_token(char *data);
token_list *token_list_last(token_list *lst);
void	add_token_list(token_list **lst, char *data);
token_list *list_first_node(token_list *lst);
void	print_token(token_list *lst);

#endif
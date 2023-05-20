#include "include/linked_list.h"

token_list *create_token(char *data)
{
	token_list *cell;

	cell = malloc(sizeof(token_list));
	if (!cell)
	{
		printf("Error malloc\n");
		return (NULL);
	}
	cell->token = data;
	cell->next = NULL;
	return (cell);
}

token_list *token_list_last(token_list *lst)
{
	while(lst->next != NULL)
	{
		lst = lst->next;
	}

	return (lst);
}

void	add_token_list(token_list **lst, char *data)
{
	token_list *cur;

	if(*lst == NULL)
		*lst = create_token(data);
	else
	{
		cur = token_list_last(*lst);
		cur->next = create_token(data);
	}
}

void	print_token(token_list *lst)
{
	while(lst != NULL)
	{
		printf("%s", lst->token);
		if (lst->next != NULL)
			printf("-->");
		else
			printf("\n");
		lst = lst->next;
	}
}

// int main(void)
// {
// 	token_list *lst;

// 	lst = NULL;
// 	add_token_list(&lst, "1");
// 	add_token_list(&lst, "2");
// 	add_token_list(&lst, "3");
// 	add_token_list(&lst, "4");
// 	add_token_list(&lst, "5");
// 	print_token(lst);
// 	return 0;
// }
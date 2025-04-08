#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <limits.h>
#include <fcntl.h>
#include <unistd.h>

void ft_del_content(void *content)
{
	(void)content;
}

void ft_print_content(void *content)
{
	printf("%s ", (char *)content);
}

void *rot1_content(void *content)
{
	return (content);
}

int main(void)
{	

	// lstnew
	t_list *lst = NULL;
	t_list *new = ft_lstnew("ABC");
	t_list *new1 = ft_lstnew("DEF");
	t_list *new2 = ft_lstnew("GHI");

	// lstadd_front lst_addback
	ft_lstadd_front(&lst, new);
	ft_lstadd_back(&lst, new1);
	ft_lstadd_back(&lst, new2);

	// lstsize
	printf("LIST_SIZE: %i\n", ft_lstsize(lst));
	printf("LIST LAST: %s\n", (char *)ft_lstlast(lst)->content);

	// lstiter
	ft_lstiter(lst, &ft_print_content);
	printf("\n");

	// lstmap
	t_list	*mapped_lst = NULL;
	mapped_lst = ft_lstmap(lst, &rot1_content, &ft_del_content);
	ft_lstiter(mapped_lst, &ft_print_content);

	// lstclea
	ft_lstclear(&lst, &ft_del_content);
	ft_lstclear(&mapped_lst, &ft_del_content);
	
}
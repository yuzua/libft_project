#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next_ptr;

	if (lst == NULL || f == NULL)
		return ;
	next_ptr = lst;
	while (next_ptr != NULL)
	{
		f(next_ptr->content);
		next_ptr = next_ptr->next;
	}
}

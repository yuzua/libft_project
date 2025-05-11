#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_ptr;
	t_list	*next_ptr;

	if (lst == NULL || del == NULL)
		return ;
	current_ptr = *lst;
	while (current_ptr != NULL)
	{
		next_ptr = current_ptr->next;
		ft_lstdelone(current_ptr, del);
		current_ptr = next_ptr;
	}
	*lst = NULL;
}

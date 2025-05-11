#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	lst_node_count;
	t_list	*next_ptr;

	lst_node_count = 0;
	if (lst == NULL)
		return ((int)lst_node_count);
	next_ptr = lst;
	while (next_ptr != NULL)
	{
		lst_node_count++;
		next_ptr = next_ptr->next;
	}
	return ((int)lst_node_count);
}

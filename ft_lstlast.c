t_list	*ft_lstlast(t_list *lst)
{
	t_list	*next_ptr;

	if (lst == NULL)
		return (NULL);
	next_ptr = lst;
	while (next_ptr->next != NULL)
		next_ptr = next_ptr->next;
	return (next_ptr);
}
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_lst_start_ptr;
// 	t_list	*new_lst_end_ptr;
// 	t_list	*next_lst_ptr;
// 	t_list	*new_lst_ptr;

// 	if (lst == NULL || f == NULL || del == NULL)
// 		return (NULL);
// 	new_lst_start_ptr = NULL;
// 	new_lst_end_ptr = NULL;
// 	next_lst_ptr = lst;
// 	while (next_lst_ptr != NULL)
// 	{
// 		f(next_lst_ptr->content);
// 		new_lst_ptr = ft_lstnew(next_lst_ptr->content);
// 		if (new_lst_ptr == NULL)
// 			if (new_lst_start_ptr == NULL)
// 				free(new_lst_ptr);
// 			else
// 				ft_lstclear(&new_lst_start_ptr, del);
// 			return (NULL);
// 		if (new_lst_start_ptr == NULL)
// 			new_lst_start_ptr = new_lst_ptr;
// 		if (new_lst_end_ptr != NULL)
// 			new_lst_end_ptr->next = new_lst_ptr;
// 		new_lst_end_ptr = new_lst_ptr;
// 		next_lst_ptr = next_lst_ptr->next;
// 	}
// 	return (new_lst_start_ptr);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_lst_ptr;
	t_list	*current_lst_ptr;
	void	*f_function_applied_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_lst = NULL;
	current_lst_ptr = lst;
	while (current_lst_ptr != NULL)
	{
		f_function_applied_content = f(current_lst_ptr->content);
		new_lst_ptr = ft_lstnew(f_function_applied_content);
		if (new_lst_ptr == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_lst_ptr);
		current_lst_ptr = current_lst_ptr->next;
	}
	return (new_lst);
}

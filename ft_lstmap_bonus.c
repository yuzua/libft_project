#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			if (del)
				del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_lst;
// 	t_list	*new_lst_ptr;
// 	t_list	*current_lst_ptr;
// 	void	*f_function_applied_content;

// 	if (lst == NULL || f == NULL || del == NULL)
// 		return (NULL);
// 	new_lst = NULL;
// 	current_lst_ptr = lst;
// 	while (current_lst_ptr != NULL)
// 	{
// 		f_function_applied_content = f(current_lst_ptr->content);
// 		new_lst_ptr = ft_lstnew(f_function_applied_content);
// 		if (new_lst_ptr == NULL)
// 		{
// 			if (f_function_applied_content)
// 				del(f_function_applied_content);
// 			ft_lstclear(&new_lst, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&new_lst, new_lst_ptr);
// 		current_lst_ptr = current_lst_ptr->next;
// 	}
// 	return (new_lst);
// }

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
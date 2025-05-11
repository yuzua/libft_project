/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeita <skeita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:11:33 by skeita            #+#    #+#             */
/*   Updated: 2025/05/11 17:05:01 by skeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			if (f_function_applied_content)
				del(f_function_applied_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_lst_ptr);
		current_lst_ptr = current_lst_ptr->next;
	}
	return (new_lst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 23:15:25 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/14 23:27:09 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	new_slt;

	new_slt = malloc(ft_lstsize(lst) * sizeof(t_list));
	while (lst != NULL)
	{
		new_slt = f(lst->content);
		lst = lst->next;
	}
	if (!lst)
		return ;
	return (lst);
}

int	ft_lstsize(t_list *lst)

/* void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
} */

int	main(void)
{
	return (0);
}

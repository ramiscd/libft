/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:22:19 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/15 21:10:55 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/* int	main(void)
{
	int	*val1 = malloc(sizeof(int));
	int	*val2 = malloc(sizeof(int));
	int	*val3 = malloc(sizeof(int));

	*val1 = 10;
	*val2 = 20;
	*val3 = 30;

	t_list	*node1 = ft_lstnew(val1);
	t_list	*node2 = ft_lstnew(val2);
	t_list	*node3 = ft_lstnew(val3);

	node1->next = node2;
	node2->next = node3;

	t_list *tmp = node1;

	while (tmp != NULL)
	{
		printf("%i -> ", *(int *)tmp->content);
		tmp = tmp->next;
	}

	t_list *res = ft_lstlast(node1);
	printf("\nvalor do ultimo nó: %i", *(int *)res->content);

	return (0);
} */

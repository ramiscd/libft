/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:49:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/14 21:40:23 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
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

	int res = ft_lstsize(node1);
	printf("\nTamanho da lista: %i", res);

	return (0);
} */

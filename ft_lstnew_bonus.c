/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:20:42 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/12 23:08:14 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* int	main(void)
{
	int *valor1 = malloc(sizeof(int));
	int *valor2 = malloc(sizeof(int));

	*valor1 = 10;
	*valor2 = 20;

	t_list* primeiro_node = ft_lstnew(valor1);
	t_list* segundo_node = ft_lstnew(valor2);

	primeiro_node->next = segundo_node;

	printf("%d\n", *(int *)primeiro_node->content);
	printf("%d\n", *(int *)segundo_node->content);
	free(valor1);
	free(valor2);
	free(primeiro_node);
	free(segundo_node);
	return (0);
} */
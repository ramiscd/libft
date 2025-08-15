/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:05:55 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/14 22:17:30 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	new->next = NULL;
}

/* int	main(void)
{
	t_list *valor1 = malloc(sizeof(t_list));
	t_list *valor2 = malloc(sizeof(t_list));

	int num1 = 10;
	int num2 = 20;

	valor1->content = &num1;
	valor1->next = NULL;
	valor2->content = &num2;
	valor2->next = NULL;

	t_list *lista = valor1;
	ft_lstadd_back(&lista, valor2);

	printf("%d\n", *(int *)lista->content);        // imprime 20
	printf("%d\n", *(int *)lista->next->content);  // imprime 10
	return (0);
} */

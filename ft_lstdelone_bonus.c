/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:18:27 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/14 22:30:48 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	del(void *content)
{
	free(content);
} */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/* int	main(void)
{
	t_list *n = malloc(sizeof(t_list));
	int *x = malloc(sizeof(int));
	*x = 42;
	n->content = x;
	n->next = NULL;
	ft_lstdelone(n, del);
	return (0);
} */

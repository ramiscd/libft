/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:10:08 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/11 22:32:42 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*string)
	{
		if (*string == c)
		{
			ptr = (char *)string;
		}
		string++;
	}
	if ((void *)ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}

/* int	main(void)
{
	char str[] = "minha string";
	int c = 'i';

	char *res = ft_strrchr(str, c);
	printf("O último caractere da str: \"%s\" é %s \n" , str, res);
} */
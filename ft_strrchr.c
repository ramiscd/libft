/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:10:08 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/24 23:01:50 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *string, int c)
{
	char	*ptr;

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

	char *res = ft_strstr(str, c);
	printf("O último caractere da str: \"%s\" é %s \n" , str, res);
} */
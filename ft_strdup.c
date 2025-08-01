/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:10:20 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/01 19:47:22 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *) malloc(ft_strlen((char *)string) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (string[i] != '\0')
		{
			ptr[i] = string[i];
			i++;
		}
	}
	return (ptr);
}

/* int	main(void)
{
	char string[] = "texto para copiar";
	char *new_srting;

	char *res = ft_strdup(string);
	printf("%s", res);
	return (0);
} */
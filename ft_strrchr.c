/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:10:08 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/15 22:24:14 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char			*ptr;
	unsigned char	uc;

	uc = (unsigned char)c;
	ptr = NULL;
	while (*string)
	{
		if ((unsigned char)*string == uc)
		{
			ptr = (char *)string;
		}
		string++;
	}
	if (uc == '\0')
		return ((char *)string);
	return (ptr);
}

/* int	main(void)
{
	char str[] = "minha string";
	int c = 'i';

	char *res = ft_strrchr(str, c);
	printf("O último caractere da str: \"%s\" é %s \n" , str, res);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:05:14 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/24 21:10:56 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1 != s2)
		{
			return (s1 - s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char str1[] = "abc";
	char str2[] = "abe";

	int res = strncmp(str1, str2, 3);

	printf("%i", res);
} */
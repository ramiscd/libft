/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:40:26 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/01 19:48:06 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len2;
	size_t	i;

	i = 0;
	len2 = strlen(s2);
	if (len2 == 0)
	{
		return ((char *)s1);
	}
	while (i <= n - len2)
	{
		if (strncmp(s1 + i, s2, len2) == 0)
		{
			return ((char *)(s1 + 1));
		}
		i++;
	}
	return (NULL);
}

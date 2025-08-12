/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:40:26 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/11 22:27:20 by rdamasce         ###   ########.fr       */
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
	while (i + len2 <= n && s1[i])
	{
		if (strncmp(s1 + i, s2, len2) == 0)
		{
			return ((char *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}

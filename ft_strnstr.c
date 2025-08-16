/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:40:26 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/15 23:22:07 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len2;
	size_t	i;

	i = 0;
	if (!s1 && (!s2 || *s2 != '\0'))
		return (NULL);
	len2 = ft_strlen(s2);
	if (len2 == 0)
		return ((char *)s1);
	while (i + len2 <= n && s1[i])
	{
		if (ft_strncmp(s1 + i, s2, len2) == 0)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}

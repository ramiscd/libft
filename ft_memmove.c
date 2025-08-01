/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 19:05:05 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/01 19:48:32 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*pdest;
	char	*psrc;
	size_t	i;

	pdest = (char *)dest;
	psrc = (char *)src;
	i = 0;
	while (psrc[i] != '\0' && i < count)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return ((void *)dest);
}

/* int	main(void)
{
	char src[] = "Hello World";
	char dest[12];

	char *res = ft_memmove(dest, src, 3);
	printf("%s", res);

	return (0);
} */
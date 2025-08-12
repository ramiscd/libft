/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 19:05:05 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/11 22:21:14 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	i = 0;
	if (pdest > psrc && pdest < psrc + count)
	{
		i = count;
		while (i > 0)
		{
			i--;
			pdest[i] = psrc[i];
		}
	}
	else
	{
		while (i < count)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}

/* int	main(void)
{
	char src[] = "Hello World";
	char dest[12];

	char *res = ft_memmove(dest, src, 3);
	printf("%s", res);

	return (0);
} */
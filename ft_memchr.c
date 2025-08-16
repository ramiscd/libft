/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:09:06 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/15 22:35:06 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n != 0)
	{
		if (*ptr == uc)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}

/* int main(void)
{
	char buffer[] = "Hello, world";
	char *ptr;

	ptr = ft_memchr(buffer, 'w', strlen(buffer));

	if (ptr != NULL) {
		printf("Caractere 'w' encontrado em:  %s\n", ptr);
	} else {
		printf("Caractere 'w' nao encontrado. \n");
	}

	return (0);
} */
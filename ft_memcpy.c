/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:02:51 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/21 20:57:07 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest_str, const void * src_str, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = (unsigned char *)dest_str;
	s = (unsigned const char *)src_str;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}

	return (dest_str);
}

int main(void)
{
	char source[] = "This is the source string";
	char target[] = "This is the target string";

	printf("Before ft_memcpy, target is \"%s\"\n", target);

	ft_memcpy(target, source, sizeof(source));

	printf("After ft_memcpy, target becames \"%s\"\n", target);
	return (0);
}
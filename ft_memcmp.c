/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:03:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/21 22:43:03 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n != 0)
	{
		if(*(char *)s1 != *(char *)s2)
		{
			return (*(char *)s1 - *(char *)s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/* int main(void)
{
	char s1[] = "abc";
	char s2[] = "abd";

	int res = ft_memcmp(s1, s2, sizeof(s1));
	printf("res %i",res);
	return 0;
} */
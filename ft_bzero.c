/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:31:33 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/21 19:40:41 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

void *ft_memset(void *str, int c, size_t n)
{
	unsigned char *pstr;
	unsigned int i;

	pstr = str;
	i = 0;

	while (i < n)
	{
		pstr[i] = c;
		i++;
	}

	return(str);
}

void ft_bzero(void *s, size_t nbyte)
{
	ft_memset(s, 0 ,nbyte);
	// printf("%s", ft_memset(s, 0 ,nbyte));
}

/* int main(void) {
  char str[] = "This is a string";
  printf("Antes: %s\n", str);

  ft_bzero(str, 6);
  printf("Depois: %s\n", str);

  return 0;
} */
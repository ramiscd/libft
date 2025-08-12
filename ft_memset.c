/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:44:37 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/11 22:35:38 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*pstr;
	unsigned int	i;

	pstr = str;
	i = 0;
	while (i < n)
	{
		pstr[i] = c;
		i++;
	}
	return (str);
}

/* int main(void) {
  char str[] = "This is a string";
  printf("Antes: %s\n", str);

  // Preenche os primeiros 5 caracteres com 'X'
  ft_memset(str, 'X', 5);
  printf("Depois: %s\n", str);

  return 0;
//   Antes: This is a string
//   Depois: XXXXXis a string
} */
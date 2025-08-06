/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:45:45 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/05 22:04:04 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);

	// Se start passar do tamanho da string, retorna string vazia
	if (start >= ft_strlen(s))
		return (ft_strdup(""));

	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);

	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';  // termina a string

	return (ptr);
}

/* int main(void)
{
	char s[] = "string";

	char *res = ft_substr(s, 3, 10);

	printf("%s", res);
} */
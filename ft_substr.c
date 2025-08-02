/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:45:45 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/01 21:28:50 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;
	int		j;

	i = start - 1;
	j = 0;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		while (s[i] != '\0')
		{
			ptr[j] = s[i];
			i++;
			j++;
		}
	}
	return (ptr);
}

/* int main(void)
{
	char s[] = "string";

	char *res = ft_substr(s, 3, 10);

	printf("%s", res);
} */
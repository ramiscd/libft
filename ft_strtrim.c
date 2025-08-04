/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:47:17 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/04 20:52:51 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int start = 0;
	char *str;
	int end;
	int size;
	int i;

	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	size = end - start + 1;
	str = malloc(size + 1);
	i = 0;
	if (!str)
		return (NULL);
	else
	{
		while (start <= end)
		{
			str[i] = s1[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
}

/* int main(void)
{
	char const *s1 = "HHHFRASE PRINCIPALHHH";
	char const *set = "HHH";
	char *res = ft_strtrim(s1, set);
	printf("%s\n", res);
	return (0);
} */
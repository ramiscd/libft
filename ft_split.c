/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:58:54 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/04 22:01:35 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	static char *s1[] = {"ola", "mundo", "bonito", NULL};

	int count = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	printf("%i\n", count);

	return (s1);
}

int main(void)
{
	char *s = "ola mundo bonito";
	char c = ' ';

	char **res = ft_split(s, c);
	int i = 0;
	while (res[i])
	{
		printf("%s \n", res[i]);
		i++;
	}
	return (0);
}
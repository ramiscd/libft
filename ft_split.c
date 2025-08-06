/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:58:54 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/05 21:59:37 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char **ft_split(char const *s, char c)
{
	int count = 0;
	int i = 0;
	int end = 0;
	char **res;
	int j;
	int inicio;

	inicio = -1;
	j = 0;

	// conta quantas palavras terá (versao simplificada)
	while (s[i] != '\0')
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			count++;
		i++;
	}

	// aloca memoria para res baseado na quantidade de palvras
	res = malloc(sizeof(char *) * (count + 1 ));
	if(!res)
		return (NULL);

	i= 0;
	
	while (s[i])	
	{
		if ((i == 0 || s[i -1] == c) && s[i] != c)
			inicio = i;

		if ((s[i + 1] == c || s[i + 1] == '\0') && inicio != -1)
		{
			end = i;
			res[j] = ft_substr(s, inicio, end - inicio + 1);
			j++;
			inicio = -1; // reseta para proxima palavra
		}
		i++;
	}

	res[j] = NULL;
	return (res);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:56:13 by youvisa           #+#    #+#             */
/*   Updated: 2025/08/07 22:34:56 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		count1;
	int		count2;
	int		total;
	int		i;
	char	*join;

	count1 = ft_strlen(s1);
	count2 = ft_strlen(s2);
	total = count1 + count2;
	join = (char *)malloc((total + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	count2 = 0;
	while (s2[count2] != '\0')
		join[i++] = s2[count2++];
	join[i] = '\0';
	return (join);
}

/* int main(void)
{
	char s1[] = "Eu gosto de ";
	char s2[] = "pao de queijo";
	char *res = ft_strjoin(s1, s2);
	printf("%s \n", res);
	return (0);
} */
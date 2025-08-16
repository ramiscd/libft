/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:45:45 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/15 21:02:59 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			max_len;

	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	max_len = ft_strlen(s) - start;
	if (len < max_len)
	{
		max_len = len;
	}
	str = (char *) malloc((max_len + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s + start, max_len + 1);
	return (str);
}

/* int main(void)
{
	char s[] = "string";

	char *res = ft_substr(s, 3, 10);

	printf("%s", res);
} */
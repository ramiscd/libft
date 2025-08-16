/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:31:54 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/15 22:19:54 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*string)
	{
		if ((unsigned char)*string == uc)
			return ((char *)string);
		string++;
	}
	if ((unsigned char)*string == uc)
		return ((char *)string);
	return (NULL);
}

/* int main(void)
{
	char buffer1[] = "computer program";
  	char * ptr;
  	int    ch = 'p';
 
  	// ptr = strchr( buffer1, ch );
	ptr = ft_strchr( buffer1, ch );
  	printf( "The first occurrence of %c in '%s' is '%s'\n", ch, buffer1, ptr );
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:31:54 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/08 19:42:28 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *string, int c)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)string;
	while (*ptr != 0)
	{
		if (*ptr == c)
		{
			return ((char *)ptr);
		}
		ptr++;
	}
	if (*ptr == c)
	{
		return ((char *)ptr);
	}
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
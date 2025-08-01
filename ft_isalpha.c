/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:24:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/18 19:32:46 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* #include <stdio.h>
int main(void)
{
	int res = ft_isalpha('a');
	printf("%i", res);

	return (0);
} */
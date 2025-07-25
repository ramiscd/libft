/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:55:45 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/24 21:08:35 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int numc)
{
	if ((numc >= '0' && numc <= '9')
		|| (numc >= 'a' && numc <= 'z')
		|| (numc >= 'A' && numc <= 'Z'))
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
	int res = ft_isalnum('a');
	printf("%i", res);
} */
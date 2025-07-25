/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:11:19 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/24 21:08:57 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int prt)
{
	if (prt >= 32 && prt <= 126)
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
	int res = ft_isprint('k');
	printf("%i", res);
} */
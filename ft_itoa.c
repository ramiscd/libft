/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:12:17 by youvisa           #+#    #+#             */
/*   Updated: 2025/08/15 23:19:18 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_zero(void)
{
	char	*res;

	res = malloc(2);
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

static int	ft_count_digits(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	int		negative;
	char	*res;

	negative = 0;
	num = n;
	if (n == 0)
		return (ft_itoa_zero());
	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	len = ft_count_digits(num);
	res = malloc(len + negative + 1);
	if (!res)
		return (NULL);
	res[len + negative] = '\0';
	while (len > 0)
	{
		res[len + negative - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (negative)
		res[0] = '-';
	return (res);
}

/* int	main(void)
{
	int		n = -1237642;
	char	*res = ft_itoa(n);

	printf("%s \n", res);
} */

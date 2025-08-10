/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youvisa <youvisa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:12:17 by youvisa           #+#    #+#             */
/*   Updated: 2025/08/10 18:48:02 by youvisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
    char *res;
    int len = 0;
    long num = n;
    int negative = 0;

    if (n == 0)
    {
        res = malloc(2);
        res[0] = '0';
        res[1] = '\0';
        return res;
    }

    if (num < 0)
    {
        negative = 1;
        num = -num;
    }

    long tmp = num;
    while (tmp > 0)
    {
        tmp /= 10;
        len++;
    }

    res = malloc(len + negative + 1);
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

int main(void)
{
  int n = -1237642;
  char *res = ft_itoa(n);
  printf("%s \n", res);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youvisa <youvisa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:56:13 by youvisa           #+#    #+#             */
/*   Updated: 2025/08/02 16:06:06 by youvisa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char *s1, char *s2)
{
  return (s1);
}

int main(void)
{
  char s1[] = "Eu gosto de ";
  char s2[] = "pao de queijo";
  char *res = ft_strjoin(s1, s2);
  printf("%s", res);
  return (0);
}
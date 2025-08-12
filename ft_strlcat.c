/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 21:14:59 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/11 22:36:03 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (size <= size_dest)
		return (size_src + size);
	while (i < (size - size_dest - 1) && src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = 0;
	return (size_dest + size_src);
}

/* int main() {
    char destino[20] = "Olá, ";
    const char *origem = "mundo!";
    size_t tamanho_destino = sizeof(destino);
    size_t resultado;

    resultado = ft_strlcat(destino, origem, tamanho_destino);

    printf("String resultante: %s\n", destino);
    printf("Tamanho total da string (se não truncada): %zu\n", resultado);

    if (resultado >= tamanho_destino) {
        printf("A string foi truncada.\n");
    }
    return 0;
} */
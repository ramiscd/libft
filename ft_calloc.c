/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:56:34 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/07 22:38:37 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitem, size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc(nitem * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nitem * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

/* int main() {
	int n = 5;
	int *array;

	// use calloc function to allocate the memory
	//array = (int*)calloc(n, sizeof(int));
	array = (int*)ft_calloc(n, sizeof(int));

	if (array == NULL) {
		fprintf(stderr, "Memory allocation failed!\n");
		return 1;
	}

	//Display the array value
	printf("Array elements after calloc: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	//free the allocated memory
	free(array);
	return 0;
} */
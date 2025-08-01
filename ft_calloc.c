/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:56:34 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/01 20:22:13 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nitem, size_t size)
{
	int *ptr;
	int i;

	ptr = (int *) malloc(nitem * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i <= nitem)
		{
			ptr[i] = 0;
		}
	}
	return ((void *) ptr);
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
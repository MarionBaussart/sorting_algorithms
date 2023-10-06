#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: array of integers we want to sort
 * @size: size of the array
 * Return: no return
 */

void shell_sort(int *array, size_t size)
{
	size_t interval = 1;
	size_t i = interval, j = i * 3 + 1, k = 0;
	int tmp;

	if (!array || size < 1)
		return;

	while (j <= size)
	{
		if (array[i - 1] > array[j - 1])
		{
			tmp = array[i - 1];
			array[i - 1] = array[j - 1];
			array[j - 1] = tmp;
			printf("first boucle\n");
		}
		i++;
		j++;
	}
	print_array(array, size);

	i = 0;
	j = i + 1;
	for (k = 0; k < size - 1; k++)
	{
		printf("2 boucle\n");
		while (array[i] > array[j] && i > 0 && j > 0)
		{
			printf("3 boucle\n");
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
			i--;
			j = i + 1;
		}
	}
}

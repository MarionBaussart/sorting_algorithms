#include "sort.h"

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
	size_t i = interval, j = i * 3 + 1;
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
		}
		i++;
		j++;
	}
	print_array(array, size);

	i = 0;
	j = i + 1;
	while (i < size - 1)
	{
		while (array[i] > array[j] && i > 0 && j > 0)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
			i--;
			j = i + 1;
		}
		i++;
	}
}

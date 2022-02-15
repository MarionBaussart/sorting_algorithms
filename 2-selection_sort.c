#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array of integers we want to sort
 * @size: size of the array
 * Return: no return
 */

void selection_sort(int *array, size_t size)
{
	size_t index, i = 0, j = i + 1;
	int min, tmp, newmin = 0;

	while (i < size)
	{
		min = array[i];
		while (j < size)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
				newmin = 1;
			}
			j++;
		}
		tmp = array[i];
		array[i] = min;
		if (newmin == 1)
		{
			array[index] = tmp;
			print_array(array, size);
		}
		newmin = 0;
		i++;
		j = i + 1;

	}
}

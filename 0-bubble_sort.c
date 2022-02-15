#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of integers we want to sort
 * @size: size of the array
 * Return: no return
 */

void bubble_sort(int *array, size_t size)
{
	size_t index = 0, count = 0;
	int tmp;

	while (index < size - count)
	{
		while (index < size - 1)
		{
			while (array[index] > array[index + 1])
			{
				tmp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = tmp;
				print_array(array, size);
			}
			index++;
		}
		index = 0;
		count += 1;
	}
}

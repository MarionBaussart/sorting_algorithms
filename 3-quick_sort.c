#include "sort.h"

/**
 * swap - swap two element of an array
 * @array: array
 * @idx1: index of the first element to swap
 * @idx2: index of the second element to swap
 * Return: no return
 */

void swap(int *array, int idx1, int idx2)
{
	int tmp;

	tmp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = tmp;
}

/**
 * partition - takes last element of the array as pivot,
 * place pivot a good place,
 * place elements inferior to pivot at the right,
 * place superior element at the left of the pivot
 * @array: array
 * @low: index of the inferior element
 * @high: index of the last element
 * @size: size of the array
 * Return: no return
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot, i = low - 1, j = low;

	pivot = array[high];
	while(j < high)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, i, j);
			print_array(array, size);
		}
		j++;
	}
	swap(array, i + 1, high);
	print_array(array, size);
	return (i + 1);
}

/**
 * quickSort - implement quickSort
 * @array: array to sort
 * @low: index of the inferior element
 * @high: index of the last element
 * @size: size of the array
 * Return: no return
 */

void quickSort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers we want to sort
 * @size: size of the array
 * Return: no return
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 1)
		return;

	quickSort(array, 0, size - 1, size);
}

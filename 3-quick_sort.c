#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array of integers we want to sort
 * @size: size of the array
 * Return: no return
 */

void quick_sort(int *array, size_t size)
{
	int pivot, tmp;
    size_t i = 0, j = size - 1;

    pivot = array[(size / 2) - 1];

    while (i < (size / 2) - 1 && j > (size / 2) - 1)
    {



        if (array[i] > pivot && pivot > array[j])
        {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            i++;
            j--;
            print_array(array, size);
        }
        if (array[i] > pivot && pivot < array[j])
            j--;
        if (array[i] < pivot && pivot > array[j])
            i++;
        if (array[i] < pivot && pivot < array[j])
        {
            j--;
            i++;
        }


    }
}

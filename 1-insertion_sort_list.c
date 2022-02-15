#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: doubly linked list of integers to sort
 * Return: no return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *tmp;

	if (!list || !*list)
		return;

	while (current)
	{
		while (current->next && current->n > current->next->n)
		{
			tmp = current->next;

			current->next = current->next->next;
			tmp->next = current;
			if (current->prev)
			{
				current->prev->next = tmp;
				tmp->prev = current->prev;
				current->prev = tmp;
			}
			else if (current->prev == NULL)
			{
				tmp->prev = NULL;
				current->prev = tmp;
				*list = tmp;
			}
			if (current->next)
				current->next->prev = current;
			print_list(*list);
			current = *list;
		}
		current = current->next;
	}
}

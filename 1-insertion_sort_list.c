#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: double linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;

	if (!list || !*list)
		return;
	temp = (*list)->next;
	for(; temp; temp = temp->next)
	{
		while (temp->prev && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (!temp->prev)
				*list = temp;
			else
				temp->prev->next = temp;
			print_list(*list);
		}
	}
}

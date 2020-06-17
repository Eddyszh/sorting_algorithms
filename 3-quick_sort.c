#include "sort.h"
/**
 * quick_sort - sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size == 0 || size == 1)
		return;
	_sort(array, 0, size - 1, size);
}

/**
 * _sort - create new pivots
 * @array: array to sort
 * @head: beggining of the sort
 * @tail: end of sort
 * @size: size of the array
 */
void _sort(int *array, size_t head, size_t tail, size_t size)
{
	size_t pivot;

	if (tail == 0 || tail <= head)
		return;
	pivot = split(array, head, tail, size);
	if (pivot != 0 && pivot > head)
		_sort(array, head, pivot - 1, size);
	if (pivot < size - 1)
		_sort(array, pivot + 1, tail, size);
}

/**
 * split - partition an array according to pivot
 * @array: array to be partitioned
 * @head: beggining of index
 * @pivot: partition index
 * @size: size of the array
 * Return: pivot
 */
size_t split(int *array,  size_t head, size_t pivot, size_t size)
{
	size_t i;

	for (i = head; i < pivot; i++)
	{
		if (array[i] < array[pivot])
		{
			if (i != head)
			{
				swap(&array[head], &array[i]);
				print_array(array, size);
			}
			head++;
		}
	}
	if (array[head] > array[pivot])
	{
		swap(&array[head], &array[pivot])
		pivot = head;
		print_array(array, size);
	}
	return (pivot);
}

/**
 * swap - swaps two elements
 * @e1: first element
 * @e2: second element
 */
void swap(int *e1, int *e2)
{
	int temp = 0;

	temp = *e1;
	*e1 = *e2;
	*e2 = temp;
}

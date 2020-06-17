#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, j = 0, temp = 0, k = 1;

	if (!array)
		return;

	for (i = size - 1; k; i--)
	{
		k = 0;
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				k = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

#include "sort.h"

/**
 * swap_ints - this will swap two integers in an array.
 * @a: The 1st integer to swap.
 * @b: The 2nd integer to swap.
 */
 
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - this sort an array of integers in ascending order.
 * @array: The array of integers to sort.
 * @size: The size of our array.
 *
 * Description: Prints the array after each swap.
 */
 
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bub = false;

	if (array == NULL || size < 2)
		return;

	while (bub == false)
	{
		bub = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bub = false;
			}
		}
		len--;
	}
}

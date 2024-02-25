#include "sort.h"

/**
 * swapper - swap two integers in an array
 * @a: first integer
 * @b: second integer
 */
void swapper(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: an array of integers to sort
 * @size: array size
 *
 * Description: Prints the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, count = size;
	bool bubs = false;

	if (array == NULL || size < 2)
		return;

	while (bubs == false)
	{
		bubs = true;
		for (i = 0; i < count - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapper(array + i, array + i + 1);
				print_array(array, size);
				bubs = false;
			}
		}
		count--;
	}
}

#include "sort.h"
/**
 * selection_sort - sorting algorithm
 * @array: pointer on array
 * @size: size of array
 * Return: nothting
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, hol;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		hol = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[hol])
				hol = j;
		}
		if (hol != i)
		{
			tmp = array[i];
			array[i] = array[hol];
			array[hol] = tmp;
			print_array(array, size);
		}
	}
}

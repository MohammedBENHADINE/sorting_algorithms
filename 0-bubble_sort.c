#include "sort.h"

/**
 * bubble_sort - sort with bubble sort algo
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size; i++)
		for (j = 0; j < size - 1 - i; j++)
			if (array[j + 1] < array[j])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] =  tmp;
				print_array(array, size);
			}
}

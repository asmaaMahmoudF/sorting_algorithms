#include "sort.h"
/**
*bubble_sort - Function that sorts an array of ints
*using bubble sort algorithm
*
*@array: array of ints
*@size: size of array
*/
void bubble_sort(int *array, size_t size)
{
    int temp;
	size_t z, x;

if (!array || !size)
	return;
	z = 0;

	while (z < size)
	{
	for (z = 0; x < size - 1; x++)
	{
	if (array[x] > array[x + 1])
	{
	temp = array[x];
	array[x] = array[x + 1];
	array[x + 1] = temp;
	print_array(array, size);
	}
	}
	z++;
	}
}

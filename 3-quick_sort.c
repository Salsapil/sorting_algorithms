#include "sort.h"
/**
 * swap - sawp 2 numbers
 * @a: first number
 * @b: second number
 * Return:  1 or 0
 */
int swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	if (temp != *a)
		return (1);

	return (0);
}
/**
 * partition - partition array
 * @array: ptr to arra
 * @low: int
 * @high: int
 * @size: size of array
 * Return:  int
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j = 0, partitionIndex = low;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (swap(&array[partitionIndex], &array[j]))
				print_array(array, size);

			partitionIndex = partitionIndex + 1;
		}
	}

	if (swap(&array[partitionIndex], &array[high]))
		print_array(array, size);
	return (partitionIndex);
}
/**
 * quick_sort_H - quick sort algorithm
 * @array: ptr to arra
 * @low: int
 * @high: int
 * @size: size of array
 * Return: void
 */
void quick_sort_H(int *array, int low, int high, size_t size)
{
	int p = 0;

	if (low >= high || low < 0)
		return;
	if (low < high)
	{
		p = partition(array, low, high, size);
		quick_sort_H(array, low, p - 1, size);
		quick_sort_H(array, p + 1, high, size);
	}
}
/**
 * quick_sort - quick sort algorithm
 * @array: ptr to arra
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_H(array, 0, size - 1, size);
}

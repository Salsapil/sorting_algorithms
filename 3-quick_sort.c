#include "sort.h"
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int j = 0, partitionIndex = low - 1;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            partitionIndex = partitionIndex + 1;
            swap(&array[partitionIndex], &array[j]);
            print_array(array, size);
        }
    }

    swap(&array[partitionIndex + 1], &array[high]);
    print_array(array, size);
    return partitionIndex + 1;
}
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

void quick_sort(int *array, size_t size)
{
    quick_sort_H(array, 0, size - 1, size);
}
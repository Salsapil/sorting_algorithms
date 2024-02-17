#include "sort.h"
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    if (temp != *a)
        return 1;

    return 0;
}
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
    return partitionIndex;
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
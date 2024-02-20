## Sorting Algorithms
**Bubble Sort Algorithm**
- A simple sorting algorithm that repeatedly steps through the input list element by element, comparing the current element with the one after it, swapping their values if needed. These passes through the list are repeated until no swaps have to be performed during a pass, meaning that the list has become fully sorted.   
- Named for the way the larger elements "bubble" up to the top of the list.   
```c
void bubble_sort(int *array, size_t size);
```
****   

**Insertion Sort Algorithm**
- A simple sorting algorithm that builds the final sorted array (or list) one item at a time by comparisons. It is much less efficient on large lists.   
```c
void insertion_sort_list(listint_t **list);
```
****   

**Selection Sort Algorithm**
-  An in-place comparison sorting algorithm. The algorithm divides the input list into two parts: a sorted sublist of items which is built up from left to right at the front (left) of the list and a sublist of the remaining unsorted items that occupy the rest of the list.   
```c
void selection_sort(int *array, size_t size);
```
****   

**Quick Sort Algorithm**
- A divide-and-conquer algorithm. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. For this reason, it is sometimes called partition-exchange sort.[4] The sub-arrays are then sorted recursively.   
```c
void quick_sort(int *array, size_t size);
```
****

## Authors

- [@Shenouda Mikhael](https://github.com/shenoudaMikhael)
- [@Salsabil Ahmed](https://github.com/salsapil)

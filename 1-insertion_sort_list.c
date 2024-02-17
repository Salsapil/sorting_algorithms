#include "sort.h"
/**
 * swap - swap tow nodes in DLL
 * @first_node: first node to swap it with second node
 * @second_node: second node to swap it with first node
 * Return: void
 */
void swap(listint_t *first_node, listint_t *second_node)
{
	if (first_node->prev != NULL)
	{
		first_node->prev->next = second_node;
	}
	if (second_node->next != NULL)
	{
		second_node->next->prev = first_node;
	}
	second_node->prev = first_node->prev;
	first_node->next = second_node->next;
	second_node->next = first_node;
	first_node->prev = second_node;
}

/**
 * insertion_sort_list - sorts a doubly linked list.
 * @list: Pointer to the head of the doubly linked list.
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (list == NULL || !(*list))
		return;

	i = (*list)->next;
	while (i != NULL)
	{
		j = i;
		while (j && j->prev)
		{
			if (j->n < j->prev->n)
			{
				swap(j->prev, j);
				if (!j->prev)
				{
					*list = j;
				}
				print_list((const listint_t *)*list);
			}
			else
			{
				j = j->prev;
			}
		}
		i = i->next;
	}
}

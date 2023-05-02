#include "lists.h"
/**
 * list_len - a func that returns the number of elements
 * in a linked list_t list
 * @h: data type pointer of struct
 *
 * Return: elements of the str i
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t node = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		node++;
	}
	return (node);
}

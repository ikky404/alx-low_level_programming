#include "lists.h"
/**
 * free_listint -  a function that frees a listint_t list
 * @head: data type pointer the head/next node
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}

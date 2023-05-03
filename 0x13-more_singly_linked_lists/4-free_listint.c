#include "lists.h"
/**
* free_listint - a function that frees a listint_t list
* @head: ata type pointer the head
*/
void free_listint(listint_t *head)
{

	if (!head)
		return;
	free_listint(head->next);
	free(head);
}

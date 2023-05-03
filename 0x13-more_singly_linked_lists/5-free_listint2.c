#include "lists.h"
/**
* free_listint2 - a function that frees a listint_t list
* @head: head of list
*/
void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;


	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}

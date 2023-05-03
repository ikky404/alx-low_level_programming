#include "lists.h"
/**
*pop_listint - a function that deletes the head node
*of a listint_t linked list, and returns the head node’s data (n)
*@head: head of the list
*
*Return: the deleted node data
*/
int pop_listint(listint_t **head)
{
	listint_t *popped;
	int content;
	
	if (*head == NULL)
		return (0);

	popped = *head;
	content = popped->n;
	free(popped);

	*head = (*head)->next;
	return (content);
}

#include "lists.h"

/**
* pop_listint - functiin that deletes the head node of
* a linked list
* @head: head of the list
* Return: data of the head node
*/

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL0
		return (0);
	current = *head;
	hnode = current->n;
	h = current->next;
	free(current);
	*head = h;
	return (hnode);
}

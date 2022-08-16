#include "lists.h"

/**
* add_nodeint - function that adds a node at the beginning
* of a linked list
* @head: the head of a list.
* @n: number of elements
* Return: address of the new element else NULL if failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

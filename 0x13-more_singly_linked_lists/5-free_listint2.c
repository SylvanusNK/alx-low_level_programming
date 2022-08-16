#include "lists.h"

/**
* free_listint2 - function that frees a linked list
* @head: head of a list
* Return: Always 0 (success)
*/

void free_listint2(listint_t *head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

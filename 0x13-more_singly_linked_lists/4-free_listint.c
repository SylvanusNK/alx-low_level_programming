#include "list.h"

/**
* free_listint - function that free a linked list
* @head: head of a list
* Return: Always 0 (success)
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->neat;
		free(temp);
	}
}

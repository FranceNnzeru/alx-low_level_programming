#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t and sets the head to NULL.
 * @head: Doubel pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		freetemp;
	}
}

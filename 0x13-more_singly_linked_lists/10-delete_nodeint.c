#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specific index of the list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted. Index starts at 0
 *
 * Return: 1 if the node was deleted successfully, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		prev = temp;
		temp = temp->next;

		if (temp == NULL)
			return (-1);
	}

	prev->next = temp->next;
	free(temp);

	return (1);
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - sets head to NULL
 * @head: linked list and head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		free(*head);
		*head = tmp->next;
	}
	*head = NULL;
}

#include"lists.h"

/**
 * free_dlistint - afjgnajfgnjdngkjan
 * @head: sjfgnfjnjnrf
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}

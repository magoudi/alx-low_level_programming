#include"lists.h"

/**
 * free_dlistint - afjgnajfgnjdngkjan
 * @head: sjfgnfjnjnrf
 * Return: na da tfyug
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}

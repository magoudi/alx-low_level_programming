#include"lists.h"

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->previous);
	}
	free(head);
}

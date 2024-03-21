#include"lists.h"

/**
 * print_dlistint - afxmalfmgnamfjgnjsf
 * @h: afgasfmgsgm
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size = 1;
	dlistint_t *current = h->next;

	printf("%d\n", h->n);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		size++;
	}
	return (size);
}

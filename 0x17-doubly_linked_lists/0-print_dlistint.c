#include"lists.h"

/**
 * print_dlistint - afxmalfmgnamfjgnjsf
 * @h: afgasfmgsgm
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 1;
	dlistint_t *current = h->next;

	if (!h)
                return (0);

	printf("%d\n", h->n);

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		size++;
	}

	return (size);
}

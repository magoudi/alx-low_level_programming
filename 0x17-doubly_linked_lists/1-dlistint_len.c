#include"lists.h"

/**
 * dlistint_len - sagsfgafgafgadf
 * @h: adgsfdbdf
 * Return: sgdfgdsgvfgfg
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	size_t size = 0;

	while (h->prev != NULL)
	h = h->prev;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);

}

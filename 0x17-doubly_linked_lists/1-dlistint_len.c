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
	else
	{
		size_t size = 1;
		dlistint_t *current = h->next;

		while (current != NULL)
		{
			current = current->next;
			size++;
		}
		return (size);
	}
}

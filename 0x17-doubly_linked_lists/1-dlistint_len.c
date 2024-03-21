#include"lists.h"

/**
 * dlistint_len - sagsfgafgafgadf
 * @h: adgsfdbdf
 * Return: sgdfgdsgvfgfg
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (1);
	else
	{
		size_t size = 0;

		while (h != NULL)
		{
			h = h->next;
			size++;
		}
		return (size);
	}
}

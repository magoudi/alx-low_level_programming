#include"lists.h"

/**
 * add_dnodeint - adgmkaerjgnasjg
 * @head: gssdbdfgf
 * @n: wgdhwg
 * Return: dfgetrge
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}

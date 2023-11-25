#include "main.h"

/**
 * set_bit - jsnfvj
 * @n: ksdnfk
 * @index: kenr
 * Return: wefnjk
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1L << index;
	return (1);
}

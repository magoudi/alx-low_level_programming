#include "main.h"

/**
 * get_bit - sfgsdf
 * @n: sdfg
 * @index: sdfg
 * Return: sdfg
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (n & 1 << index)
		return (1);
	else
		return (0);
}

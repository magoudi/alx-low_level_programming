#include "main.h"

/**
 * flip_bits - adfb
 * @n: egfg
 * @m: aerg
 * Return: sdfg
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;

	for (unsigned int i = 0; i < sizeof(n) * 8; i++)
	{
		if ((n & 1L << i) != (m & 1L << i))
			x++;
	}
	return (x);
}

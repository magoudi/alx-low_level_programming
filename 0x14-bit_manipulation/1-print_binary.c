#include "main.h"

/**
 * print_binary - retrte
 * @n: eaf
 * Retern: none
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, started = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar ('1');
			started++;
		}
		else if (started)
			_putchar ('0');
	}
	if (!started)
		_putchar ('0');
}

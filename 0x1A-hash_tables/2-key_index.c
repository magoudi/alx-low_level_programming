#include "hash_tables.h"

/**
 *key_index - dfavbdkfhbvfv
 *@key: sdfbvshdfbvfdv
 *@size: wfsbvkbfv
 *Return: ajfbvabsfgdbch
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

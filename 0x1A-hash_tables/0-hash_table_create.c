#include "main.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	if (size <= 0)
		return NULL;
	hash_table_t temp;
	temp.size = size;
	return &temp;
}

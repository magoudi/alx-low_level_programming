#include "hash_tables.h"

/**
 * hash_table_create - jagbbfvhbfhsbbfh
 * @size: vcnjfgbjncjkrd
 * Return: sdknfjnvjfdnsfmcxk
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *temp = malloc(sizeof(hash_table_t));

	if (size <= 0)
		return (NULL);

	temp->array = malloc(size * sizeof(hash_node_t *));
	temp->size = size;
	return (temp);
}

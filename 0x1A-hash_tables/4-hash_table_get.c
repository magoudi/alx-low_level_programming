#include "hash_tables.h"

/**
 * hash_table_get - sdgnbjdnsfbvndmf
 * @ht: xjvnsdnvskjncf
 * @key: djbnvdjnfgngf
 * Return: vnsdfjvnfvnc
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	int index;

	if (!key || !ht || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (!(ht->array[index]))
		return (NULL);

	current = ht->array[index];
	while (current)
	{
		if (!strcmp(current->key, key))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

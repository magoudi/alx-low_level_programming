#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	int index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (!strcmp(current->key, key))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

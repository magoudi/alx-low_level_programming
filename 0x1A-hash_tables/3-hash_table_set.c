#include "hash_tables.h"

/**
 * hash_table_set - jfbvabsfvkbsndkjfnc
 * @ht: fbvhfbvshbgshrbf
 * @key: jfsbvhbsfvhfbvshkd
 * @value: fbvabdfvhbsfhgb
 * Return: fjvbfvhsbfvbnskrj
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode = malloc(sizeof(hash_node_t));
	char *valcpy = strdup(value);
	char *keycpy = strdup(key);
	int index;

	if (strlen(key) == 0 || !key || !value || !ht)
		return (0);
	if (!newnode)
		return (0);

	index = key_index((unsigned char *)keycpy, ht->size);

	newnode->key = keycpy;
	newnode->value = valcpy;

	if (ht->array[index] == NULL)
	{
		newnode->next = NULL;
		ht->array[index] = newnode;
	}
	else
	{
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);
}

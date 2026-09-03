#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element in a hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = ht->array[index];
	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);

			free(new_node->value);
			new_node->value = new_value;
			return (1);
		}
		new_node = new_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

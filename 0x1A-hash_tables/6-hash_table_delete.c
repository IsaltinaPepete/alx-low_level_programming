#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are deleted in the order
 *              they appear in the array of the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *next;
	unsigned long int i;
	hash_table_t *aux = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}			
		}
	}
	free(aux->array);
	free(aux);
}

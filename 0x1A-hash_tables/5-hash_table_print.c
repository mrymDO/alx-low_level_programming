#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int sep = 0;

	if (ht == NULL)
		return;


	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			sep == 1 ? printf(", ") : 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			sep = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}

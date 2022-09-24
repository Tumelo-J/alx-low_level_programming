#include "hash_tables.h"

#define T hash_table_t /* Hashtable */
#define N hash_node_t  /* Node */

/**
 * hash_table_create - Creates a hashtable
 * @size: size of the array
 * Return: A pointer to the hashtable or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	T *table;

	/* Memory allocation */
	table = malloc(sizeof(T));

	/* Return NULL if memory allocation was not done */
	if (!table)
		return (NULL);

	/* Value assignment */
	table->size = size;
	table->array = calloc(size, sizeof(N *));

	/* Free memory if the array is NULL */
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
    return (table);
}


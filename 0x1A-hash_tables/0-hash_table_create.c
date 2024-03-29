#include "hash_tables.h"

#define T hash_table_t
#define N hash_node_t

T *hash_table_create(unsigned long int size)
{
    /* Memory allocation */
    T *table = malloc(sizeof(T));

    /* Return NULL if memory was not allocated */
    if (table == NULL)
        return (NULL);
    
    /* Initialize the hashtable */
    table->size = size;
    table->array = calloc(size, sizeof(N *));

    /* Free memory if ) */
    if (table->array == NULL)
    {
        free(table);
        return (NULL);
    }
return (table);
}

#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: number of buckets (array slots)
 *
 * Return: pointer to the newly created hash_table_t on success,
 *         NULL on any failure or if size == 0.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;

    if (size == 0)
        return (NULL);

    ht = malloc(sizeof(*ht));
    if (ht == NULL)
        return (NULL);

    ht->size = size;

    /* calloc to zero-initialize all bucket pointers to NULL */
    ht->array = calloc(size, sizeof(*ht->array));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    return (ht);
}

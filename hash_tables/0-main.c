#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht = hash_table_create(1024);

    printf("%p\n", (void *)ht);

    if (ht)
    {
        free(ht->array);
        free(ht);
    }

    return (0);
}

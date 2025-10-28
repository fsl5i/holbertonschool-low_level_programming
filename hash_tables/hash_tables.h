#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
	* struct hash_node_s - node of a hash table
	* @key: the key, string, unique in the hash table
	* @value: the value corresponding to a key
	* @next: pointer to the next node (for collision handling)
	*/
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
	* struct hash_table_s - hash table data structure
	* @size: the size of the array
	* @array: an array of size @size, each cell is a pointer to the first node
	*/
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */

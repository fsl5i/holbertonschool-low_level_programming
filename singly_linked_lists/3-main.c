#include "lists.h"
#include <stdio.h>

int main(void)
{
    list_t *head = NULL;

    add_node_end(&head, "Hello");
    add_node_end(&head, "World");

    printf("List:\n");
    while (head)
    {
        printf("[%u] %s\n", head->len, head->str);
        head = head->next;
    }

    return (0);
}

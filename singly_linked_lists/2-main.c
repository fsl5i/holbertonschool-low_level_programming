#include "lists.h"
#include <stdio.h>

int main(void)
{
    list_t *head = NULL;

    add_node(&head, "World");
    add_node(&head, "Hello");

    printf("List:\n");
    while (head)
    {
        printf("[%u] %s\n", head->len, head->str);
        head = head->next;
    }

    return (0);
}

int main(void)
{
    list_t node1 = {"Hello", 5, NULL};
    list_t node2 = {"World", 5, &node1};
    size_t n;

    n = list_len(&node2);
    printf("Number of elements: %lu\n", n);
    return (0);
}

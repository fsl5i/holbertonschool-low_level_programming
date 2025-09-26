#include "function_pointers.h"

/* function to print name as is */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/* function to print name in uppercase */
void print_name_uppercase(char *name)
{
int i = 0;

printf("Hello, my uppercase name is ");
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
putchar(name[i] - 'a' + 'A');
else
putchar(name[i]);
i++;
}
putchar('\n');
}

/* main - check the code */
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
return (0);
}

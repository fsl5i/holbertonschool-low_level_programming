#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j;
int match;

while (s[i])
{
match = 0;
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (!match)
break;
i++;
}
return (i);
}

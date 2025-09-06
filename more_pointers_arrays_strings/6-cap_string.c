#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to modify
 *
 * Return: The modified string
 */
char *cap_string(char *s)
{
int a = 0, i;
char spc[] = {32, '\t', '\n', 44, ';', '.', '!', '?', '"', '(', ')', '{', '}'};

while (s[a])
{
if (a == 0 && s[a] >= 'a' && s[a] <= 'z')
{
s[a] -= 32;
}

for (i = 0; i < 13; i++)
{
if (s[a] == spc[i] && s[a + 1] >= 'a' && s[a + 1] <= 'z')
{
s[a + 1] -= 32;
}
}
a++;
}

return (s);
}

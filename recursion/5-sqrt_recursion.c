#include "main.h"

/**
 * helper_sqrt - helps to find sqrt recursively
 * @n: number
 * @i: possible square root
 *
 * Return: sqrt if exists, -1 otherwise
 */
int helper_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (helper_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: square root, or -1 if not natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (helper_sqrt(n, 0));
}

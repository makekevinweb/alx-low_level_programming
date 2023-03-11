#include "main.h"
int _sqrt(int num, int root);

/**
 *_sqrt_recursion - gives the square root of a number
 *@n: the number to search the square root for
 *Return: the square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(1, n));
}

/**
 *_sqrt - returns the square root of n
 *@num: number to be used while searching for root
 *@root: the square root
 *Return: the root
 */
int _sqrt(int num, int root)
{
if (num * num == root)
return (num);
return (_sqrt(num + 1, root));
}

#include "main.h"

/**
 *factorial - prints the factorial number
 *@n: the integer
 * Return: factorial n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}

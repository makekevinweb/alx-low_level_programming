#include "main.h"
/**
 * print_sign -function to print sign of character
 * @n: character to be tested on
 *Return: 1 if positive and 0 if negative and -1 if negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

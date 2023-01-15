#include "main.h"
/**
 *print_number - print the number
 *@n: integer to be printed
 *
 */

void print_number(int n)
{
unsigned int n1;
if (n < 0)/* if n negative it is converted*/
{
n1 = -n;
_putchar('-');
}
else
{
n1 = n;
}
/* this is acts like a loop function*/
if (n1 / 10)
{
print_number(n1 / 10);/*function is recalled until we a single digit number*/
}

_putchar((n1 % 10) + '0');
}

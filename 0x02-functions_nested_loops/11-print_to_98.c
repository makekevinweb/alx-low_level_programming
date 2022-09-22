#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -functionn to print numbers in order up to 98
 *@n: number to start from
 */
void print_to_98(int n)
{
while (n < 98)
{
prtinf(n);
_putchar(',');
_putchar(' ');
n++;
}
printf(n);
_putchar('\n');
}

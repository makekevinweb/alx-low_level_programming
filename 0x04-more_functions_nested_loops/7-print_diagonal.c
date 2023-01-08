#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: the numbers of lines
 *
 *return: always 0
 */
void print_diagonal( int n)
{
int i;
int j;

if ( n < 1) /*for values below 1*/
{
_putchar('\n');
}

else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
  
}

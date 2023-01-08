#include "main.h"
/**
 *print_line - prints a line
 *@n: number of times to print
 *
 *return: Always 0 on success
 */
void print_line(int n)
{

int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}

#include "main.h"
/**
 *print_most_numbers - prints the first 10 natural numbers except 2 and 4
 *
 *return: Always 0
 */
void print_most_numbers(void)
{
int i;
int n;
for (i = 0; i < 10; i++)
{
  for (n = 0; n < 15; n++)
{
_putchar(i + '0');
}
_putchar('\n');
}
}



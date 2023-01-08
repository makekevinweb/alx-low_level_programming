
#include "main.h"
/**
 *more_numbers - prints the first 14 natural numbers 10 times
 *
 *return: Always 0
 */
void more_numbers(void)
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



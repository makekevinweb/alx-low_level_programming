
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
if (n > 9)
{
_putchar('1'); /* prints 1 as the first number for digits between 9 and 20*/
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}



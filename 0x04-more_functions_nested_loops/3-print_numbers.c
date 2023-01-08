#include "main.h"
/**
 *print_numbers - prints the first 10 natural numbers
 *
 *return: Always 0
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}

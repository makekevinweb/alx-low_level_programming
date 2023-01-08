#include "main.h"
/**
 *print_numbers - prints the first 10 natural numbers except 2 and 4
 *
 *return: Always 0
 */
void print_numbers(void)
{
int i;
for(i = 0; i < 10; i++)
if((i != 2) && (i != 4))  
{
_putchar(i + '0');
}
_putchar('\n');
}


#include "main.h"
/**
 *puts_half - prints the second half of a string
 *
 *@str: the string to be printed
 *Description: If odd number of chars, print (length - 1) / 2
 *Return:void
 */
void puts_half(char *str)
{
int len, n;

/* calculates length of string*/
for(len = 0; str[len] != '\0'; len++)
;
n = len / 2;
 
if ( len % 3 == 0)
{
n = (len - 1) / 2;
}

while (n < len)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
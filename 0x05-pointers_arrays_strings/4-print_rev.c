#include "main.h"
/**
 *print_rev - reverse a string
 *
 *@s: pointer to string to be printed
 *
 */
void print_rev(char *s)
{

int i = 0;

/*calculates length of string*/

while (s[i] != '\0')
{
i++;
}

/*prints the string*/
while (i >= 0)
{
_putchar(s[i]);
i--;
}

_putchar('\0');
_putchar('\n');
}

#include "main.h"
/**
 *_puts - prints a string to standard output
 *
 *@str: pointer to string to print
 *
 */

void _puts(char *str)
{
int i;
/* the loop runs till the end of the string*/
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);

}

_putchar('\n');
}


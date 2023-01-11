#include "main.h"

/**
 *puts2 - print a string by bu jumping some characters
 *
 *@str: pointer to string to print
 *
 *Return: void
 */
void puts2(char *str)
{
int len, i;

/*calculate the length*/
for (len = 0; str[len] != '\0'; len++)
;

/*print the string by jumping some characters*/
for (i = 0; i <= len; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

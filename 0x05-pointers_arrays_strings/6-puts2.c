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
int i;
/*print the string by jumping some characters*/
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}

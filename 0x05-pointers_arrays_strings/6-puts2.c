#include "main.h"
/**
 *puts2 -print every other character of a string
 *@str: string to be printed
 */
void puts2(char *str)
{
int i;
int j;
i = 0;
while (str[i] != '0')
{
i++;
}
_putchar(&i); 
for (j = 0; j < i; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}

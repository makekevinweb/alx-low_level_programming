#include "main.h"
/**
 *rev_string -function that reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
int index;
for (index = 0; s[index] != '\0'; index++)
;
for (index = index - 1; s[index] != '\0'; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}

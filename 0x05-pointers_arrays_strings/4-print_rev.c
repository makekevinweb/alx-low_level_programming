#nclude "main.h"
/**
 *print_rev -prints a string in reverse direction.
 * @s: the string to be printed put
 */
void print_rev(char *s)
{
int index;
for (index = 0; *s[index] != '\0'; index++)
;
for (index = index--; *s[index] != '\0'; index--)
{
_putchar(*s[index]);
}
_putchar('\n');
}

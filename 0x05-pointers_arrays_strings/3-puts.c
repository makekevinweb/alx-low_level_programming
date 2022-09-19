#include "main.h"
/**
 *_puts -This is a function which prints a string followed by a new line
 * @str: this is container of the string
 *return: The string to be printed
 */
void _puts(char *str)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
putchar(str[index]);
}
putchar('\n');
}

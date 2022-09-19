#include "main.h"
/**
 *_strlen -a function which return length of string
 * @s: this is the input  string
 * Return: it is the length of the string
 */
int _strlen(char *s)
{
int index;
for (index = 0; s[index] != '\0'; index++)
;
return (index);
}

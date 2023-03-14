#include "main.h"

/**
 *_strcmp - compares two strings together
 *@s1: first string
 *@s2: second string
 *
 *Return: a number greater, less or equal to zero
 */
int _strcmp(char *s1, char *s2)
{
int equal = 0;
while (*s1)
{
/*compares character's ASCII value to another*/
if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}

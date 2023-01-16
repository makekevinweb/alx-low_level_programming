#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - locates first occurence in the string s
 *
 *@s: string to check
 *@accept: string with bytes to check for
 *
 *Return: a pointer to s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
/*iterats through string */
for (i = 0; s[i] != '\0'; i++)
{
/*checks for match in accept and break upon first occurence*/
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
break;
}
}
}
return (NULL);
}

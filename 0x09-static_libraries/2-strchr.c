#include <stddef.h>
#include "main.h"

/**
 *_strchr - locates a character in a string
 *
 *@s: string being checked
 *@c: character being searched for
 *
 *Return: the first occurence of the character
 */
char *_strchr(char *s, char c)
{
int i;
/** iterates though the string until a match is found*/
for (i = 0; *(s + i) != '\0'; i++)
{
if (*(s + i) == c)
break; /*immediately breaks after first occurence*/
}
/* return first occurence if there was a match*/
if (*(s + i) == c)
return (s + i);

return (NULL);
}

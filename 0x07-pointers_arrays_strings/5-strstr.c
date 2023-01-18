#include "main.h"
#include <stddef.h>

/**
 *_strstr -  finds first occurence of a substring in another string
 *
 *@haystack: the string
 *@needle: the sub string
 *
 *Return: a pointer to at beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;

/*checks if needle is not empty*/
if (*needle == '\0')
return (haystack);

/*iterates through haystack by incrementing its pointer*/
while (*haystack != '\0')
{
/*checks if the word is a substring of needle*/
for (i = 0, j = 0; *(haystack + i) == *(needle + j); i++, j++)
{
/*checks it the end of needle is near*/
if (*(needle + j + 1) == '\0')
return (haystack);
}
haystack++;
}

return (NULL);
}

#include "main.h"
#include <stddef.h>
/**
*_strchr - the function searches for a certain string in a character
*
*@s: this is a pointer to the string s
*@c: this is the character we are searching for
*
*Return: pointer to the first occurence of c Or NULL if the c is not found
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *s != '\0'; i++)/* go through the string up to null character*/
{
if (c == s[i])
{
return (s + i);/* return a pointer to current character if it is c*/
}
}
return (NULL);/* in case of C not found in the string returns NULL*/
}

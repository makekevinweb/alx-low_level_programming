#include "main.h"
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
while (*s != '\0')/* go through the string until we reach the null character*/
{
if (c == *s)/* check if current character is c*/
{
return (s);/* return a pointer to current character if it is c*/
}
s++; /*move to the next character in the string*/
}
return (0);/* in case of C not found in the string returns NULL*/
}
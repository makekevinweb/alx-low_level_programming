#include "main.h"
/**
 *_isalpha -checks for alphabetical characters
 *@c: character to be checked
 *Return: 1 if c is an alphabetical character and 0 for other characters
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}

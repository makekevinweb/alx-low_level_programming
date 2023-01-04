#include "main.h"
/**
*_memset - this function fills the first n memory areas of s with the value b
*@s: a pointer to the char s whose address will be filled with the value b
*@b: this is the value assigned to the memory areas of the char s
*@n: this is the number of memory areas of char s to fill up with the value b
*
*Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0; /* i is set to 0 so as to start at 1st memory area of s*/
for (i = 0; i < n; i++)
s[i] = b; /* this assigns a value of b to the specific memory area*/

return (s);
}

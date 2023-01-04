#include "main.h"
/**
*_memcpy - it copies n bytes from src to dest
*
*@src: this is where the bytes are copied from
*@dest: this is where the bytes are copied at
*@n: the number of bytes to copy
*
*Return: the pointer dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}

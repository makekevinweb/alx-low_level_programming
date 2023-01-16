#include "main.h"

/**
 *_memset - fills the first n bytes of memory area of  constant byte b
 *@s: pointer to s
 *@b: the constant byte to fill with
 *@n: number of bytes to overwrite
 *
 *Return: pointer to memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned  int i;
/*overwvrites  up to n bytes of where s points to */
for (i = 0; i < n; i++)
{
*(s + i) = b;
}

return (s);
}

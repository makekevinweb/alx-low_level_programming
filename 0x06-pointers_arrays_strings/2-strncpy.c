#include "main.h"

/**
 * _strncpy -  copies to first string with a portion of the other string
 *
 *@dest: first string that is overwritten
 *@src: secong string whom we copy n bytes from to dest
 *@n:number of bytes of src to copy
 *
 *Return: pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j;

/*this loops starts copying new values to dest*/
for (j = 0; j <= n; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}

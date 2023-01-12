#include "main.h"

/**
 *_strcat - concatenates two strings together
 *@dest: first string
 *@src: second string
 *
 *Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
int i, j;

/*calculate lenght of dest*/
for (i = 0; dest[i] != '\0'; i++)
;
/*concatenate the src to dest*/
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}

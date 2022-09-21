#include "main.h"
/**
 **_strcpy -copy the string to another
 *@dest: the pointer to the array to copy to
 *@src: the pointer of the string to copy
 *Return: Always pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}

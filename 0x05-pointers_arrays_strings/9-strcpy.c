#include "main.h"

/**
 *_strcpy - copies a string to another
 *@src: pointer to string to copy
 *@dest: pointer to  string that is overwritten
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
  int len, i;
  for(len = 0; src[len] != '\0'; len++)
    ;
  for(i = 0; i <= len; i++)
    {
      dest[i] = src[i];
    }
  return (dest);
}

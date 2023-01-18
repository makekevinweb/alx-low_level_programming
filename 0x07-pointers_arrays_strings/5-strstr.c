#include "main.h"
#include <stddef.h>

/**
 *_strstr -  finds first occurence of a substring in another string
 *
 *@haysatck: the string
 *@needle: the sub string
 *
 *Return: a pointer to at beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
  int index = 0;
  if (*needle == '\0')
    return(haystack);

  while (*haystack != '\0')
    {
      if (*haystack == *needle)
	{
	  do{
	    if (*(needle + 1) == '\0')
	      return(haystack);
	    
	    index++;
	  } while (*(haystack + index) == *(needle + index));
	}
      haystack++;
    }
  return (NULL);
}

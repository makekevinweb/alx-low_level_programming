#include "main.h"

/**
 *cap_string - capitalizes each word of a string
 * @str: the string to capitalize
 *
 *Return: a capitalized character
 */
char *cap_string(char *str)
{
  int i;
  if (str == '\0')
    return (str);
  else
    {
  while (str[i] != '\0')
    {
      if (str[0] >= 'a' && str[0] <= 'z')
	{
	  str[0] = (str[i] - 32);
	  i++;
	}
      
      if(str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}'|| str[i] == ' ' || str[i] == '\n'|| str[i] == '\t')
	{
	  if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	    {
	      str[i + 1] = (str[i + 1] - 32);
	      i++;
	    }
	  i++;
	}
      else
	{
	  i++;
	}
    }
  return (str);
}
}

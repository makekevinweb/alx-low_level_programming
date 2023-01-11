#include "main.h"

/**
 *_atoi - converts a string to a digit
 *@s: the string to convert
 *
 */

int _atoi(char *s)
{
  unsigned int num = 0;
  int sign = 1;
  do{
    if (*s == '-')
      sign *= -1;

    else if (*s >= '0' && *s <= '9')
	     num = (num * 10) + (*s - '0');
  }while (*s++);

  return (num * sign);
}

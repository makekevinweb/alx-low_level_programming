#include "main.h"

/**
 *_atoi - converts a string to a digit
 *@s: the string to convert
 *
 */

int _atoi(char *s)
{
int num, sign;

 while ((*s) = ' ')
   *s++;
 if ((*s) = '-')
   {
   sign = -1,
     *s++;
   }
 
 else if ((*s) = '+')

   {
     sign = 1;
     *s++;
   }
 
 while ((*s) >= '0' && (*s) <= '9')
   {
     num = (num * 10) + (*s++ - '0');
   }
 
 return (num * sign);
 }

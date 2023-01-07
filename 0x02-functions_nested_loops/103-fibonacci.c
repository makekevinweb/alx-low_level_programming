#include <stdio.h>
/**
 *main -  prints the sum of even valued fibonacci number
 *
 *Return: always 0 on sucess
 */
int main(void)
{
  
  long int i, j, next, sum;
  /*numbers used in calculation; long int is used as it can hold bigger values*/
  /*because if we don't the statemt for i != 12586269025* we always be true*/
  i = 1;
  j = 2;
  sum = 0;
  while (i <= 4000000)
    {
      if ((i % 2) == 0)
	{
	  sum = sum + i;
	}
      next = i + j;
      i = j;
      j = next;
    }
  printf("%ld\n", sum);
  return (0);
}

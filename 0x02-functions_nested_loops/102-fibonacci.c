#include <stdio.h>
/**
 *main -  prints the fibonacci sequence up to F(50)
 *
 *Return: always 0 on sucess
 */
int main(void)
{
  int n; 
  int i, j, next;
  i = 1;
  j = 2;
  for (n = 1; n <= 50; n++)
    {
      if ( i != 12586269025)
	{
	  printf("%d, ", i);
	}
      else
	{
	  printf("%d\n", i);
	}
      next = i + j;
      i = j;
      j = next;
    }
  return (0);
}

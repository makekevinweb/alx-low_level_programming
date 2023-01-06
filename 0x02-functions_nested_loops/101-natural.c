#include <stdio.h>w
/**
 *main - function to print the sum of multiples of 3 and 5
 *
 *@sum: sum
 *
 *Return: always 0 on success
 */
int main (void)
{
  int sum;
  int i;
  for ( i = 0, i < 1024; i++)
    {
      sum = 0;
      if ((i % 3) == 0)
	{
	  sum = sum + i;
	}
      else if ((i % 5) == 0)
	{
	  sum = sum + i;
	}
}
  printf("%d\n", sum);
  return (0);
} 

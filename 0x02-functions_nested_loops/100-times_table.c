#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int i, j, k;
if (n >= 0 && n <= 15)/*check if n is btn 0 and 15*/
{
  for (i = 0; i <= n; i++)
    {
      for (j = 0; j <= n; j++)
	{
	  k = j * i;
	  _putchar(k + '0');
	  if (j < n)
	    {
	      _putchar(',');
	      _putchar(' ');
	    }
	}
      _putchar('\n');
    }
 }
}

#include "main.h"
/**
 *print_diagonal - prints a diagonal line
 *@n: the numbers of lines
 *
 *return: always 0
 */
void print_diagonal( int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      for (i = 0; i < n; i++)
	{
	  _putchar(' ');
	}
      _putchar('\\');
    }
  _putchar('\n');
}

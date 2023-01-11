#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array
 *@a: pointer to array
 *@n: number of elements to print
 *
 *Return: void
 */
void print_array(int *a, int n)
{
  int i = 0;
  while ( i < (n - 1))
    {
      printf("%d , ", a[i]);
      i++;
    }
  printf("%d", a[i]);
}

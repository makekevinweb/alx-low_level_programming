#include "main.h"

/**
 *reverse_array - reverses an array
 *
 *@a: the array
 *@n: the number of elements the array has
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
  int i = 0;
  n--;
  while (i < (n / 2))
    {
      int next;
      next = a[i];
      a[i] = a[n];
      a[n] = next;
      i++;
      n--;
    }
}

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

if (n > 0)
{
printf("%d", a[i]);

i++;

while (i < n)
{
printf(", %d", a[i]);
i++;
}
}
printf("\n");
}

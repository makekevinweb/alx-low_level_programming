#include "main.h"
/**
 * swap_int -a function that swaps two integers values
 * @a: first entry
 * @b: second entry
 */
void swap_int(int *a, int *b)
{
int n;
int m;
n = *a;
m = *b;
*a = m;
*b = n;
}

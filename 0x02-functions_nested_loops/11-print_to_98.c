#include "main.h"
#include <stdio.h>
/**
 *print_to_98 -prints from n to 98
 *@n: number to start from
 */
void print_to_98(int n)
{
if (n < 98)/* for n less than 98*/
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)/* for n greater than 98*/
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}

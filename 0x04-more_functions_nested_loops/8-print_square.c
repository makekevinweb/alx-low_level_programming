#include "main.h"
/**
 *print_square - prints spuare
 *@size: the number of square
 *
 *return: always 0
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)/*prints for columm*/
{
for (j = 0; j < size; j++)/* prints for rows*/
{
_putchar('#');
}
_putchar('\n');
}
}
}

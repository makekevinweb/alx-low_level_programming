#include "main.h"
/**
 *times_table -fucntion to print the 9 timetables
 *rone = row, cone = column, d = digits of current result
 *Return: timetables
 *add extra space past single digit
 */
void times_table(void)
{
int row, nbrs, ans;
for (row = 0; row <= 9; row++)
{
for (nbrs = 0; nbrs < 9; nbrs++)
{
ans = row * nbrs;
_putchar(ans + '0');
_putchar(',');
_putchar(' ');
}
_putchar(ans + '0');
_putchar('\n');
}
}

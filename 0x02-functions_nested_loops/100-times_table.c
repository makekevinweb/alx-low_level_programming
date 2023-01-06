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
k = j * i;/* k is the product of i and j which is to be printed*/

/* this pritns the first 0's zeros in all lines*/
if (k == 0)
{
_putchar(k + '0');
}
/* this statement is for the first line of 0's */
if (k == 0 && i == 0 && j != n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
/* prints for value between 0 and 9*/
if (k < 10 && k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}

/*this prints values between 9 and 100*/
else if (k > 9 && k < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((k / 10) + '0');/* this prints the first digit of the double digit number*/
_putchar((k % 10) + '0');/* this prints the last digit of the double digit number*/
}
/* the following prints values between 99 and 999*/
else if (k > 99 && k < 1000)
{
_putchar(',');
_putchar(' ');/* we use one space in order to make sure table is uniform and look goods*/
_putchar((k / 100) + '0');/* this prints the first digit of the double digit number*/
_putchar(((k % 100) / 10) + '0');/* this prints the second digit of the double digit number*/
_putchar((k % 10) + '0');/* this always prints the last digit*/
}
}
_putchar('\n');/*add a new line afer first row of multiplication*/
}
}
}

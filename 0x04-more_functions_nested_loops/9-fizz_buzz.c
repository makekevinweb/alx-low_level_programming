#include "main.h"
#include <stdio.h>
/**
 *main - prints number from 1 to 100 but prints fizz for multiples of 3
 *it prints buzz for multiples 5
 *it prints fizzbuzz for multiples of 3 and 5
 *
 *return: always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i == 1)
{
_putchar(i + '0');
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
_putchar(' ');
printf("FizzBuzz");
}

else if (i % 3 == 0)
{
_putchar(' ');
printf("Fizz");
}
else if (i % 5 == 0)
{
_putchar(' ');
printf("Buzz");
}

else
{
printf(" %d", i);
}
printf("\n");
 
}
return (0);
}

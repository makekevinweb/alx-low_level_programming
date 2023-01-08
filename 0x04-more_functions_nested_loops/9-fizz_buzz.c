#include "main.h"
#include <stdio.h>
/**
 *main - prints number from 1 to 100 but prints fizz for multiples of 3
 *it prints buzz for multiples 5
 *it prints fizzbuzz for multiples of 3 and 5
 *
 *Return: always 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i == 1)
{
printf("%d", i);
}
else if ((i % 3 == 0) && (i % 5 == 0))
{
printf(" ");
printf("FizzBuzz");
}

else if (i % 3 == 0)
{
printf(" ");
printf("Fizz");
}
else if (i % 5 == 0)
{
printf(" ");
printf("Buzz");
}

else
{
printf(" %d", i);
}
}
printf("\n");
return (0);
}

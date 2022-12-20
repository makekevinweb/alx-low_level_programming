#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0(Success)
*/
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 2;
printf("The last digit of ");
if (m > 5)
{
printf("%d is %d and is greater than 5", n, m);
}
else if (m == 0)
{
printf("%d is %d and is 0", n, m);
}
else
{
printf("%d is %d and is less than 6 and not 0", n, m);
}
return (0);
}

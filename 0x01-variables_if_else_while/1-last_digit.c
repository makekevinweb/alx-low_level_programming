#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Entry point
 *Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int ln;
srand(time(0));
n = rand() - RAND_MAX / 2;
ln = n % 10;
printf("Last digit of %d is %d", n, ln);
if (ln > 5)
{
printf("and is greater than 5");
}
else if (ln == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0 \n");
}
return (0);
}

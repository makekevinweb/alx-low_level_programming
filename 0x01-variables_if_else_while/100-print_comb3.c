#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0(success)
 */
int main(void)
{
int a;
int m;
a = '0';
m = '0';
while (a <= '9')
{
while (m <= '9')
{
putchar(a);
putchar(m);
putchar(',');
putchar(' ');
m++;
}
a++;
}
return (0);
}

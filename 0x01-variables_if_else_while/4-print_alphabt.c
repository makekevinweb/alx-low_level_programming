

#include <stdio.h>
/**
 *main - Entry point
 *Return: ALways 0(success)
 */
int main(void)
{
char n;
n = 'a';
while (n <= 'z')
{
if (n == 'e')
{
n++;
}
else if (n == 'q')
{
n++;
}
else
{
putchar(n);
n++;
}
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 *main - Entry point
 *Return: ALways 0(success)
 */
int main(void)
{
char n;
char m;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
for (m = 'A'; m <= 'Z'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 *main - Entry point
 *Return: ALways 0(success)
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z' && n != 'e' && n != 'q'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}

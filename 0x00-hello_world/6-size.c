#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0(success)
 */
int main(void)
{
int i;
char c;
long int li;
long long int lli;
float f;

printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(i));
printf("size of a char: %lu byte(s)", (unsigned long)sizeof(c));
printf("size of a long int: %lu byte(s)", (unsigned long)sizeof(li));
printf("size of a long long int: %lu byte(s)", (unsigned long)sizeof(lli));
printf("size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}

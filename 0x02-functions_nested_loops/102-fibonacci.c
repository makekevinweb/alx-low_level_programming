#include <stdio.h>
/**
 *main -  prints the fibonacci sequence up to F(50)
 *
 *Return: always 0 on sucess
 */
int main(void)
{
int n; /* the fibonacci number to calculate*/
long int i, j, next;
/*numbers used in calculation; long int is used as it can hold bigger values*/
/*because if we don't the statemt for i != 12586269025* we always be true*/
i = 1;
j = 2;
for (n = 1; n <= 50; n++)
{
if (i != 20365011074)
{
printf("%ld, ", i);
}
else
{
printf("%ld\n", i);
}
next = i + j;
i = j;
j = next;
}
return (0);
}

#include <stdio.h>
/**
 *main - function to print the sum of multiples of 3 and 5
 *
 *@sum: sum
 *
 *Return: always 0 on success
 */
int main (void)
{
int sum, sum3, sum5;
int i;
sum = 0;
sum3 = 0;
sum5 = 0;
for (i = 0; i < 1024; i++)
{
 
if ((i % 3) == 0)
{
sum3 = sum3 + i;
 
}
else if ((i % 5) == 0)
{
sum5 = sum5 + i;

}
}
sum = sum3 + sum5;
printf("%d\n", sum);
return (0);
} 

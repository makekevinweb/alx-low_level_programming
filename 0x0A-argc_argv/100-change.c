#include <stdio.h>
#include <stdlib.h>
/**
 *main -  gives minimum number of coins to make change for an amount of money
 *@a: number of arguments
 *@b: array of arguments
 *Return: Always 0 on success
 */
int main(int a, char *b[])
{
	int c;

	if (a != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (b[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
/* the lines are broken so as not to exceed max of characters for line*/
	else
	{
		c = atoi(b[1]);
		c = (c / 25) + (c % 25) / 10 + ((c % 25) % 10) / 5;
		c += (((c % 25) % 10) % 5) / 2;
		c += ((((c % 25) % 10) % 5) % 2) / 1;
		printf("%d\n", c);
		return (0);
	}
}

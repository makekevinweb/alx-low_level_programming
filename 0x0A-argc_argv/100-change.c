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
	int d;

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
		d = atoi(b[1]);
		c = (d / 25) + ((d % 25) / 10) + (((d % 25) % 10) / 5);
		c += ((((d % 25) % 10) % 5) / 2);
		c += (((((d % 25) % 10) % 5) % 2) / 1);
		printf("%d\n", c);
		return (0);
	}
}

#include <stdio.h>
#include <stdlib.h>
/**
 *main - mutliplies two numbers
 *@a: number of arguments
 *@b: array of arguments
 *Return: always 0 on success
 */
int main(int a, char *b[])
{
	int c;
	int d;

	if (a == 3)
	{
		c = atoi(b[1]);
		d = atoi(b[2]);
		printf("%d\n", c * d);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}

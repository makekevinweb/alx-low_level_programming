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
	int c = atoi(b[1]);
	int d = atoi(b[2]);

	if (a == 3)
	{
		printf("%d\n", c * d);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}

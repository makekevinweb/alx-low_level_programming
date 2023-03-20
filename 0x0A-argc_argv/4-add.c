#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds numbers together
 *@a: number of arguments
 *@b: array of arguments
 *Return: always 0 on success
 */
int main(int a, char *b[])
{
	int c = 1;

	if (a > 1)
	{
		while (c < a)
		{
			if (isdigit(b[c]))
			{
				c = c + atoi(b[c]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}

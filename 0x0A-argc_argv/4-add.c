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
	int d;
	int sum = 0;
/*this will give us sum if the numbers don't contain other symbols*/
	if (a > 1)
	{
		while (c < a)
		{
			for (d = 0; b[c][d] != '\0'; d++)
			{
				if (!isdigit(b[c][d]))
				{
					printf("Error\n");
						return (1);
				}
			}
			sum += atoi(b[c]);
			c++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}

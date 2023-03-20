#include <stdio.h>
/**
 *main - prints all argumes passed down to function
 *@a: number of arguments
 *@b: array of arguments
 *Return: always 0 on success
 */
int main(int a, char *b[])
{
	int c = 0;

	while (c < a)
	{
		printf("%s\n", b[c]);
		c++;
	}
	return (0);
}

#include <stdio.h>
/**
 *main - prints name of the program
 *@a: number of argument
 *@b: arrays of arguments
 *Return: always 0
 */
int main(int a, char *b[])
{
	(void) a;
	printf("%s \n", b[0]);
	return (0);
}

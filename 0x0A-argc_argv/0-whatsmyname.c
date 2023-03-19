#include <stdio.h>
/**
 *main - prints name of the program
 *@a: number of argument
 *@b: arrays of arguments
 *Return: always 0
 */
int main((void)int a, char *b[])
{
	printf("%s \n", b[0]);
	return (0);
}

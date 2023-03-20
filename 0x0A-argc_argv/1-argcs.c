#include <stdio.h>
/**
 *main - prints number of arguments passed to it
 *@a: number of arguments
 *@b: the array of arguments
 *Return: always 0 on success
 */
int main(int a, char *b[])
{
	(void) b;
	printf("%d\n", a);
	return(0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - prints a name
 *@name: pointer to name
 *@f: pointer to function
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f = &puts;
	f(name);
}

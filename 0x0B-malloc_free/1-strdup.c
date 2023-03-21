#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - gives a pointer to a new string
 *@str: string to duplicate
 *Return: pointer to newly created string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *strcopy;

	strcopy = malloc(sizeof(*str));
	if (strcopy == NULL)
	{
		return (NULL);
	}
	strcopy = str;
	return (strcopy);
}

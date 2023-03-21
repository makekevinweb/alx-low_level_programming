#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - gives a pointer to a new string
 *@str: string to duplicate
 *Return: pointer to newly created string
 */
char *_strdup(char *str)
{
	char *strcopy;

	if (str == NULL)
	{
		return (NULL);
	}
	strcopy = malloc(sizeof(*str));
	if (strcopy == NULL)
	{
		return (NULL);
	}
	strcopy = str;
	return (strcopy);
}

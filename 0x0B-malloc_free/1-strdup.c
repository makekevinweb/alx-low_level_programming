#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	strcopy = malloc(sizeof(char) * (strlen(str) + 1));
	if (strcopy == NULL)
	{
		return (NULL);
	}
	strcpy(strcopy, str);
	return (strcopy);
}

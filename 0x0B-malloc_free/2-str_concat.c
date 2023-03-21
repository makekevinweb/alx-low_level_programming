#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointers which has the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}

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

	concat = malloc(sizeof(char) *(strlen(s1) + strlen(s2) + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	concat = strcat(s1, s2);
	return(concat);
}

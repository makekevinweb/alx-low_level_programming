#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creates an array of chars
 *@size: size of array
 *@c: the character to fill array with
 *Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j = (char *) malloc(sizeof(char) * size);

	if (j == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);

}

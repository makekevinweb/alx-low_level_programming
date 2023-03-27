#include <stdlib.h>
/**
 * argstostr - concatenates arguments.
 * @ac: number of string to be concatenated.
 * @av: strings to be concatenated.
 * Return: String concatenated.
 */
char *argstostr(int ac, char **av)
{
	int length = 0;
	int *tlength = &length;
	int i,j,k;
	char *sentence;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		*tlength += j;
	}
	*tlength += ac;
	sentence = malloc(sizeof(char) * length);
	if (sentence == NULL)
		return NULL;
	for (k = 0, i = 0, j = 0; k < (length - 1))
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++, k++)
			{
				sentence[k] = av[i][j];
			}
			k++;
			sentence[k] = '\n';
		}
	}
	return (sentence);
}

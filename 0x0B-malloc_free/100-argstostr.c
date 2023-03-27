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
	int i, j, k;
	char *sentence;

	if (ac == 0 || av == NULL)
		return (NULL);
	/*calculate lenght of concatenated string*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		*tlength += j;
	}
	*tlength += ac;
	/*allocate memo to concatenated string*/
	sentence = malloc(sizeof(char) * (length + 1));
	if (sentence == NULL)
		return (NULL);
/** copies to concatenated string*/
	k = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				sentence[k] = av[i][j];
				k++;
			}
			sentence[k] = 'n';
			k++;
		}
	sentence[k] = '\0';
	return (sentence);
}

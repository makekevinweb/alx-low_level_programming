#include "main.h"

/**
 *leet - encodes letters using 1137
 *@str: the string
 *
 *Return: an encoded character
 */
char *leet(char *str)
{
int i;
int j;
char letter[] = {'A', 'E', 'O', 'T', 'L'};
char value[] = {'4', '3', '0', '7', '1'};
/**iterates through the string*/
for (i = 0; str[i] != '\0'; i++)
{
/*compares a character with all elements in letter array*/
for (j = 0; j < 4; j++)
{
/*checks for character matching cap letters and small cap by adding 32*/
if (str[i] == letter[j] || str[i] == (letter[j] + 32))
{
str[i] = value[j];
}
}
}
return (str);
}

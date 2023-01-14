#include "main.h"
/**
 *cap_string - capitalizes each word of a string
 * @str: the string to capitalize
 *
 *Return: a capitalized character
 */
char *cap_string(char *str)
{
int i;
/** checks if the string is not empty*/
if (*str == '\0')
return (str);
/*capitalizes the letters*/
else
{
while (str[i] != '\0')
{
/*checks if the first letter is capitalized or not*/
if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] = (str[i] - 32);
i++;
}
/**checks for what is separating the words*/
if (str[i] == ',' || str[i] == ';' ||
str[i] == '.' || str[i] == '!' ||
str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' ||
str[i] == '{' || str[i] == '}' ||
str[i] == ' ' || str[i] == '\n' ||
str[i] == '\t')
{
/**checks if the next character is a letter and then  capitalizes it*/
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] = (str[i + 1] - 32);
i++;
}
i++;
}
/*this runs for other instances of the function such for letters in the words*/
else
{
i++;
}
}
return (str);
}
}

#include "main.h"
/**
 *rev_string - reverses a string
 *
 *@s: pointer to string to reverse
 */

int _strlen(char *s);

void rev_string(char *s)
{
int len, i;

/*calculates lenght of string using a function already predefined*/
for (len = 0; s[len] != '\0'; len++)

/*reverse the string*/
for (i = 0; i < (len / 2); i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}

#include "main.h"
/**
 *rev_string - reverses a string
 *
 *@s: pointer to string to reverse
 */
void rev_string(char *s)
{
int length, back;
int reverse[1000000000];
/* we calculate length of string and also copy it*/

for (length = 0; s[length] != '\0'; length ++)
{
reverse[length] = s[length];
}

/* this reverses the string*/

length --;

while (length >= 0)
{
back = 0;
s[back] = reverse[length];
back++;
length--;
}
s[(back + 1)] = '\0';
}

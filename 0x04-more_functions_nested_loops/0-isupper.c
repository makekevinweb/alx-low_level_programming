#include "main.h"
/**
 *isupper - returns 1 if a charater is a capital letter
 *
 *Return: 1 if c is a capital letter and is 0 if not
 */
int _isupper(int n)
{
if ((n >= 'A') && (n <= 'Z'))/*checks if n is capital letter*/
{
return (1);
}
else
{
return (0);
}
}

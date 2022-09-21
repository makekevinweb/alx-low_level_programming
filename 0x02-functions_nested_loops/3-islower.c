#include "main.h"
/**
 *_islower -function to check lower case character
 *@c: the charcacter to be checked
 *return:1 for lowercase characters and 0 for anytthing else
 */
int _islower(int c)
{
int c;
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

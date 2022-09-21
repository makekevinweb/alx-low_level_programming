#include "main.h"
/**
 *_abs - function to compute value of integer
 *@c: The number to be computed
 *Return: void
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val = c * -1;
return (abs_val);
}
return (c);
}

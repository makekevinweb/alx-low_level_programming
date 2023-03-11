#include "main.h"
int _divisible(int num, int div);

/**
 *is_prime_number -  checks if a number is a prime number
 *@n: number to check
 *Return: returns 1 is number is a prime number
 */
int is_prime_number(int n)
{
int div = 2;
if (n <= 1)
return (0);
else if (n <= 3)
return (1);
return (_divisible(n, div));
}

/**
 *_divisible - identifies number divisible by themselves only
 *@n: the number to be checked
 *@div: the divisor
 *Return: always 1 if the number is only divisible by itself
 */

int _divisible(int n, int div)
{
if (n % div == 0 && n > div)
return (0);
else if (n == div)
return (1);
return (_divisible(n, div + 1));
}

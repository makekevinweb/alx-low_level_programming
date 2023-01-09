#include <stdio.h>
#include <math.h>

/**
 *main - print the biggest prime number of the number stored in num
 *
 *Return: Always 0
 */

int main(void)
{ 
long int num = 612852475143;
long int max_factor; /* this contains the biggest factor which is a prime number*/
 long int i;
 
/*we first divide the num by 2*/
 while (num % 2 == 0)
   {
     max_factor = 2;
     num /= 2;
   }

 /**num is now an odd number, we then start dividing the number from 3,5,7, ...*/
 for(i = 3; i <= sqrt(num); i += 2)
   /* we don't go beyond the square root of a number*/

   {
     while (num % i == 0)
       {
	 max_factor = i;
	 num /= i;
       }
   }
 /*if the num is still great than 1, then it is a prime number itself*/
 if (i > 2)
   {
     max_factor = num;
   }
 
 printf("%ld\n", max_factor);
 return (num);
}

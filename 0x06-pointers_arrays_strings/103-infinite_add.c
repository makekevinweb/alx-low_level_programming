#include "main.h"

/**
 *infinite_add - prints a the sum of two numbers
 *@n1: first number
 *@n2: second number
 *@r: the sum of the two numbers
 *@size_r: size of the r
 *
 *Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
{
  
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int len_res = (len1 > len2 ? len1 : len2) + 1; // +1 for the potential carry
    if (len_res > size_r) return 0; // Check if buffer is large enough
    int carry = 0;
    r[len_res] = '\0'; // Null terminate the result string
    while (len1 > 0 || len2 > 0) {
      int num1 = (len1 > 0 ? n1[--len1] - '0' : 0);
      int num2 = (len2 > 0 ? n2[--len2] - '0' : 0);
      int sum = num1 + num2 + carry;
      carry = sum / 10;
      r[--len_res] = (sum % 10) + '0';
    }
    if (carry > 0) {
      if (len_res == 0) return 0; // Check if buffer is large enough
      r[--len_res] = carry + '0';
    }
    return r + len_res;
  
}

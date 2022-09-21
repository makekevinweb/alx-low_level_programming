#include "main.h"
/**
 *print_alphabet_x10 -function to print the alphabet 10 times
 *retunrn: void
 */
void print_alphabet_10(void);
{
int j;
j = 0;
while (j < 10)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
j++;
}
}

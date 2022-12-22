/**
 *resert-to_98 - the integer to be changed is put in here
 *
 *Return: Always 0(Success)
 */
void reset_to_98(int *n)
{
char n;
char *p;
*p = n;
p = &n;
n = 402;
putchar(n);
*p = 98;
putchar(n);
}

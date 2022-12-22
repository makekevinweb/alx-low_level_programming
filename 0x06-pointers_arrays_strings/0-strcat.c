/**
 **_strcat- this function concantenates the second string to the first
 *@dest: the first string
 *@src: the second string
 *Return: always 0(success)
 */
char *_strcat(char *dest, char *src)
{
int index;
for (index = 0; *dest[index] != '\0'; index++)
;
int index2;
for (index2 = 0; *srx[index2] != '\0'; index2++)
;
int a;
while (a <= index)
{
putchar(*dest[a]);
}

int b;
while (b <= index2)
{
putchar(*src[b]);
}
putchar('\n');
return (0);
}

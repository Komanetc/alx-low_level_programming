#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 *
 */

int main(void)
{
int n;
int j;

for (n = 0; n < 100; n++)
{
for (j = 0; j < 100; j++)
{
if (n < j)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (n != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

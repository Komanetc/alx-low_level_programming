#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
	int x, c, v;

	for (x = 0; x < 10; x++)
	{
		for (c = 1; c < 10; c++)
		{
			for (v = 2; v < 10; v++)
			{
				if (x < c && c < v)
				{
					putchar(x + '0');
					putchar(c + '0');
					putchar(v + '0');
					if (c + v + x != 24)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

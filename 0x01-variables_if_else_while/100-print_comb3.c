#include <stdio.h>
/**
 * main - Entry point
 * Description - To print out the possible combinations of two digit numbers
 * Return: always 0
 */
int main(void)
{
	int m;
	int n = 0;

	while (n < 9)
	{
		m = 0;
		while (m < 10)
		{
			if (n != m && n < m)
			{
				putchar('0' + n);
				putchar('0' + m);

				if (m + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

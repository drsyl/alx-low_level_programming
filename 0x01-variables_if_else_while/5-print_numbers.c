#include <stdio.h>
/**
 * main - Entry point
 * Description - To print all single numbers of base 10 starting with 0
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

#include<stdio.h>
/**
 * main - Entry point, prints all simgle-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		putchar(digit + '0');

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}

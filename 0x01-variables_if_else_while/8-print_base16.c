#include<stdio.h>
/**
 * main - Entry point of the program,prints all numbers with putchar and
 * the first 6 letters lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  numbers;
	char c;

	numbers = '0';
	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

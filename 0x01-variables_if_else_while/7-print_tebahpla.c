#include<stdio.h>
/**
 * main - Entry point of the program,prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success) to indicate the program ended correctly
 */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

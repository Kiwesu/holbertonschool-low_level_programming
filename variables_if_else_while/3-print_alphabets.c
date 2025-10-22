#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then uppercase
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	/* print lowercase alphabet */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	/* print uppercase alphabet */
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}

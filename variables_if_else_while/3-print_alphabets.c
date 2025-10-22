#include <stdio.h>

/**
 * main - Print alphabet in lowercase then uppercase
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	/* Print lowercase alphabetical chars */
	while ( ch <= 'z')
	{
	  putchar(ch);
	  ch++;
	}

	ch = 'A'; /* reset to uppercase */
	/* Print uppercase alphabetical chars */
	while ( ch <= 'Z')
	{
	  putchar(ch);
	  ch++;
	}	       

	putchar('\n');
	return (0);
}

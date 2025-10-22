#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, then followed by a new line.
 * Return: Always 0
 */
int main(void)
{
  char ch = 'a';

  while (ch <= 'z')

  /* Print lowercase alphabet */
  if (ch != 'q' && ch !='e')
    {
      putchar(ch);
      ch++;
    }

  putchar('\n');
    return (0);
}

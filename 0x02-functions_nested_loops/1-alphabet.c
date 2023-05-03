#include <stdio.h>

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
int main()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return 0;
}

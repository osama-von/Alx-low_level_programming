#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times,
 * followed by a new  line
 */

void print_alphabet_x10(void)
{
	int i;

	char ch;

	i = 0;

	while (i < 10)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	i++;
}
}

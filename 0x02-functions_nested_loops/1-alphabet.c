#include "main.h"
/**
 * Write a function that prints the alphabet, in lowercase, followed by a new line
 *nt_alphabet(void)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

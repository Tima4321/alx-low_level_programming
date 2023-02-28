#include "main.h"
/**
 * Write a function that prints the alphabet, in lowercase, followed by a new line
 * return 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}





#include "main.h"
/*Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * return 0
 */
void print_alphabet_x10(void) {
	int count= 0;
	char letter;
	while(count++<=9) {	
		for ( letter= 'a',letter<= 'z',letter++)
			putchar(letter);
		putchar('\n');
	}
	return 0;
}
	
		

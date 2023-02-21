#include "main.h"

/**
 * prints_alphabet- print all alphabet in lowercase
 *
 * This function uses a loop to print each letter of the alphabet in lowercase
 * starting with 'a' and ending with 'z'. After printing all the letters, it
 * adds a new line character to the output.
 * Return: void
 */

void print_alphabet(void)

{
char c;

for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}

_putchar('\n');

}

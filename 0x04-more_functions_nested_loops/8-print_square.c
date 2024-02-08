#include "main.h"

/**
 * print_square - Prints a square in the terminal
 * @size: Size of the square
 * Description : Can only use _putchar to print. Use '#' to print square.
 */

void print_square(int size)
{
	int x, y;

	y = 0;
	
	if (size < 1)
	       	_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}

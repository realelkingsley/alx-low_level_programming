#include"main.h"

/**
 * print_line - print straight lines in the terminal
 * @n : number of _ to be printed
 * return: void
 */

void print_line(int n)
{

	int i;

	if (n > 0)

	{
		for(i = 0; i < n; i++)

		{
			_putchar('_');
		}
	}
	_putchar('\n');

}

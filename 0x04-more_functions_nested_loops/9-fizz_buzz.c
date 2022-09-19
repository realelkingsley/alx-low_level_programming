#include <stdio.h>

/**
 * main - print fizz buzz
 * Return: void
 */

int main(void)

{
	int il;

	for  (i = 1; i <= 100; i++)

	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)

		{
			prinft("Buzz");
		}

		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else

		{
			printf("%d", i);
		}

		if (i != 100)
			putchar(' ');
		else
			putchar('\n');
	}

	return (0);

}

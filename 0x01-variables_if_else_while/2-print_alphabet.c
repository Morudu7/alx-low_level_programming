#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (succsess)
 */
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		int lower_x = (x);

		putchar(lower_x);
		putchar('\n');
	}
	return (0);
}

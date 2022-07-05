#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints _putchar
 *
 * Return: always 0
 */

int main(void)
{
	char c[] = "putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

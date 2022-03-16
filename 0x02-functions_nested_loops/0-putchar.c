#include "main.h"
/**
 * main - print '_putchar' followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh != '\0')
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}

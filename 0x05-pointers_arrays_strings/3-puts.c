#include "main.h"

/**
 * printf - prints a string in stdout
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		printf(*(str + i));
		i++;
	}
	printf('\n');
}

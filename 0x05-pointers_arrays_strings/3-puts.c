#include "main.h"
/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the length of a string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf(str[i]);
		i++;
	}
	printf('\n');
}

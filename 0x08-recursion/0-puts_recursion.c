#include "main.h"

/**
 * _puts_recursion - print a string, followed by a new line
 * @s: String values
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
}

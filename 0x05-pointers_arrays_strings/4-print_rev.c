#include"main.h"
/**
 * print_rev - a function that prints a string, in reverse, followed by a new line
 * @s : pointer to string print
 * return:void
 */
void print_rev(char *s)
{
	int i = 0;

	while(s[i])
		i++;

	while (i--)
	{
		_putchat(s[i]);
	}
	_putchar('\n');
}


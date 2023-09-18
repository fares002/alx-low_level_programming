#include "main.h"
#include<stdio.h>
/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}


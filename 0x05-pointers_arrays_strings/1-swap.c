#include "main.h"
/**
*swap_int - a function that swaps the values of two integers
*@a:first interger
*@b:second integer
*Return : nothing
*/
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

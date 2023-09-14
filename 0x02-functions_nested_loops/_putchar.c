#include<unistd.h>
#include"main.h"
/**
* _putcahr - write the character to stdout
*@c :the cahracter to print
* return: one success 1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}

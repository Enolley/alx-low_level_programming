#include "main.h"

/**
* print_sign - sign printing
* @n: number to be checked
*
* Return: 1 for positive, 0 for neutral, -1 for negative
*/

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
}

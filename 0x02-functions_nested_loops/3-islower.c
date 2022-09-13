#include "main.h"

/**
* _islower - checks if there is lowercase
* @c: The character to be checked
*
* Return: Always 0
*
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

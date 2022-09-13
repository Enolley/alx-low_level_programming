#include "main.h"

/**
* print_lowercase - Print alphabet in lowercase
*
* Return: Always 0
*/

void print_lowercase(void)
{
  char lower;

  for (lower = 'a'; lower <= 'z'; lower++)
  {
    _putchar(lower);
  }
  
  _putchar('\n');
}

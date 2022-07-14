#include "main.h"

/**
*main -> function that prints
*the sign of a number
*
*Return :1 if its positive, 0 if its negative and
* -1 if is less than zero
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

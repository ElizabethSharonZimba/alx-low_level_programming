#include <stdio.h>
#include "main.h"
/**
 * _islower - Check for lowercase characters
 *@c: The character to be che
 *Reaturn 1 for lowercase characters or for anything else return 0
 */
int _islower(int c)

{
if (c >= 'a' && c <= 'z')
{

return (1);
}

return (0);
}

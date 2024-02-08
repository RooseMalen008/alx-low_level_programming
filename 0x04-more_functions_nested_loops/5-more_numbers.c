#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 *
 * Return : Always 0.
 */

void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (j > 9)
                _putchar((j / 10) + '0');

            _putchar((j % 10) + '0');
        }

        _putchar('\n');
    }
}

#include <stdio.h>

int main(void)
{
    int digit;

    for (digit = 0; digit < 10; digit++)
    {
        /* print the digit */
        putchar(digit + '0');

        /* if it's not the last digit, print the separator */
        if (digit != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    /* print a newline character at the end */
    putchar('\n');

    return 0;
}

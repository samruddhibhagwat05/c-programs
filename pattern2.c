#include <stdio.h>

int main()
{
    int i, j, k;

    // outer loop for each row of the pyramid
    for (i = 1; i <= 7; i++)

    {
        // loop for printing spaces before stars
        for (j = 1; j <= 7 - i; j++)

        {
            printf(" ");
        }

        // loop for printing stars
        for (k = 1; k <= 2 * i - 1; k++)

        {
            printf("*");
        }

        // move to the next line after each row
        printf("\n");
    }

    return 0;
}
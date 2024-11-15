#include <stdio.h>

int main()
{
    int i, j;

    // Loop through each row
    for (i = 1; i <= 7; i++)

    {
        // Print spaces for alignment
        for (j = 1; j <= i; j++)

        {

            // Print stars for pyramid shape
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
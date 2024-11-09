#include <stdio.h>

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6};
    int i;

    // Initialize or assign values to the elements as needed
    x[0] = 1;
    x[1] = 2;
    x[3] = 5;

    // Print the elements in the array
    for (i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }

    return 0;
}
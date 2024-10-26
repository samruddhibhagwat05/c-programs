#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20; // using the ternary operator to find maximum
    int max = (a > b) ? a : b;
    printf("The max value is: %d\n", max);

    return 0;
}
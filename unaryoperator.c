#include <stdio.h>

int main()
{
    int a = 10;

    // Unary operators
    printf("Original value of a: %d\n", a);

    printf("Pre-increment a: %d\n", ++a); // Pre-increment

    printf("Post-increment a: %d\n", a++); // Post-increment

    printf("Value of a after post-increment: %d\n", a); // Display value after post-increment

    printf("Pre-decrement a: %d\n", --a); // Pre-decrement

    printf("Post-decrement a: %d\n", a--); // Post-decrement

    printf("Value of a after post-decrement: %d\n", a); // Display value after post-decrement

    return 0;
}

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("a&&b: %d\n", a && b); // Logical AND: returns true(1) if both a and b are true (non-zero)

    printf("a||b: %d\n", a || b); // Logical OR: returns true(1) if atleat one a or b is true (non-zero)

    printf("!a: %d\n", !a); // Logical NOT: returns true (1) if a is zero, otherwise returns false (0)

    printf("!b: %d\n", !b); // Logical NOT: returns true (1) if b is zero, otherwise returns false (0)

    return 0;
}
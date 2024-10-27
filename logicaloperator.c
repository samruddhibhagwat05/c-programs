#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("a&&b: %d\n", a && b); // Logical AND: (1&&0) is true if both are non zero

    printf("a||b: %d\n", a || b); // Logical OR: (1||0) is true if atleast one of them is non zero

    printf("!a: %d\n", !a); // Logical NOT: true if a is zero, otherwise returns false (0)

    printf("!b: %d\n", !b); // Logical NOT:  true (1) if b is zero, otherwise returns false (0)

    return 0;
}

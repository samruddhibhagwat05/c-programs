#include <stdio.h>

int main()
{
    int a = 5; // 5=0101
    int b = 3; // 3=0011

    printf("a&b:%d\n", a & b); // Result:1 (0001)

    printf("a|b:%d\n", a | b); // Result:7 (0111)

    printf("a^b:%d\n", a ^ b); // Reusult:6 (0110)

    printf("-a:%d\n", a); // Reusult:-5

    printf("a<<1:%d\n", a << 1); // Reusult:10 (1010)

    printf("a>>1:%d\n", a >> 1); // Reusult:2 (0010)

    return 0;
}

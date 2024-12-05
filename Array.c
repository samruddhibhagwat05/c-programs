#include <stdio.h>

int main()
{
    int i;
    int x[10] = {1, 2, 3, 4, 5, 6};

    x[0] = 1;
    x[1] = 2;
    x[3] = 6;

    for (i = 0; i < 10; i++)
    {
        printf("%d n", x[i]);
    }
    return 0;
}
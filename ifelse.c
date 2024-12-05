#include <stdio.h>

int main()
{
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    if (no % 2 == 0)
    {
        printf("It is an even number\n");
    }
    else
    {
        printf("It is an odd number\n");
    }

    return 0;
}

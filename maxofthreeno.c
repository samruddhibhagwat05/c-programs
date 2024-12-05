#include <stdio.h>

int main()
{
    int no1, no2, no3;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &no1, &no2, &no3);

    if (no1 > no2 && no1 > no3)
    {
        printf("Max number is %d\n", no1);
    }
    else if (no2 > no1 && no2 > no3)
    {
        printf("Max number is %d\n", no2);
    }
    else if (no3 > no1 && no3 > no2)
    {
        printf("Max number is %d\n", no3);
    }
    else
    {
        printf("The numbers are equal.\n");
    }

    return 0;
}

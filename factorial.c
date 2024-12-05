#include <stdio.h>

long int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return (1);
    }
    else
    {
        return (num * factorial(num - 1));
    }
}

int main()
{
    int num;
    long int ans;
    printf("enter num\n");
    scanf("%d", &num);

    ans = factorial(num);
    printf("factorial=%ld", ans);
    return 0;
}
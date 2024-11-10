#include <stdio.h>

int main()
{
    int num;

    while (1) // Infinite loop to keep asking until user exits
    {
        printf("Enter a number from 1 to 7 (or 0 to exit): ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("Exiting...\n");
            break; // Exit the loop if user enters 0
        }

        switch (num)
        {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;

            printf("Invalid input! Please enter a number from 1 to 7.\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int m,y;
    printf("Enter the number of the month for which the number of days in it will be shown and also enter the year");
    scanf("%d %d", &m, &y);
    switch (m) 
    {
        case 1: 
        case 3: 
        case 5: 
        case 7:
        case 8: 
        case 10: 
        case 12: 
            printf("31 days");
            break;
        case 4:
        case 6: 
        case 9: 
        case 11:
            printf("30 days");
            break;
        case 2: 
            // Check for leap year
            if ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0))) 
                printf("29 days (Leap year)");
            else 
                printf("28 days");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.");
    }
    return 0;
}

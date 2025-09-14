//Checks if a given year is a leap year or not
#include <stdio.h>
void main()
{
    printf("Enter a year");
    int year=0;
    scanf("%d",&year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    printf("%d is a leap year.\n", year);
    else 
    printf("%d is not a leap year.\n", year);
}

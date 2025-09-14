//Checks whether is person is eligible for driving based on age.
//Any person above age 18 is eligible for driving.
#include <stdio.h>

void main()
{
    int a=0;
    printf("Enter age of the person");
    scanf("%d", &a);
    if (a>=18)
    printf("Person is eligible for driving");
    else
    printf("Person is not eligible for driving");
    getch();
}

//Checks whether a person is eligible or not based on age, i.e. above 18.
#include <stdio.h>

void main()
{
    int a=0;
    printf("Enter age of the person");
    scanf("%d", &a);
    if (a>=18)
    printf("Person is eligible for voting");
    else
    printf("Person is not eligible for voting");
    getch();
}

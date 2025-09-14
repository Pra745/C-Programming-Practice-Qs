//Checks if the sum of the angles of a triangle is equal to 180 or not, i.e. a valid triangle or not.
#include <stdio.h>

void main()
{
    int a,b,c, sum;
    printf("Enter the three angles of the triangle");
    scanf("%d", &a, &b, &c);
    sum=a+b+c;
    if (sum==180)
    printf("The triangle is valid");
    else
    printf("Not a valid triangle");
    getch();
}

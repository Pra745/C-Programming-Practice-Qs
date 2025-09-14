//Checks whether a number is positive, negative or zero.
#include <stdio.h>
void main()
{
    printf("Enter a number");
    int n=0;
    scanf("%d",&n);
    if (n>0)
    printf("Positive number");
    else if (n<0)
    printf("Negative number");
    else if (n==0)
    printf("Number is Zero");
}

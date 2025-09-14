//Checks if a number is divisible by 5 and 11.
#include <stdio.h>
void main()
{
    printf("Enter a number");
    int n=0;
    scanf("%d",&n);
    if (n%5==0 && n%11==0)
    printf("Number is divisible by 5 and 11");
    else
    printf("Number is not divisible by 5 and 11");
}

//Checks whether a number is divisible by 3 and 7
#include <stdio.h>
void main()
{
    printf("Enter a number");
    int n=0;
    scanf("%d",&n);
    if (n%7==0 && n%3==0)
    printf("Number is divisible by 3 and 7");
    else
    printf("Number is not divisible by 3 and 7");
    getch();
}

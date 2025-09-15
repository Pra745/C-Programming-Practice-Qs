//Prints the sum of digits of the inputted number.
#include <stdio.h>

int main() 
{
    int n, i, sum, d;
    printf("Enter a number");
    scanf("%d", &n);
    while(n!=0)
    {
        d=d%10;
        sum=sum+d;
        n=n/10;
    }
    printf("Sum of digits=", sum);
    return 0;
}

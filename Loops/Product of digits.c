//Prints the product of digits of the inputted number.
#include <stdio.h>

int main() 
{
    int n, i, p=1, d;
    printf("Enter a number");
    scanf("%d", &n);
    while(n!=0)
    {
        d=d%10;
        p=p*d;
        n=n/10;
    }
    printf("Product of digits=", p);
    return 0;
}

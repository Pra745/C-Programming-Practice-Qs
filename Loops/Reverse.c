//Prints the reversed number of the inputted number.
#include <stdio.h>

int main() 
{
    int n, i, r, d;
    printf("Enter a number");
    scanf("%d", &n);
    while(n!=0)
    {
        d=d%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reversed number =", r);
    return 0;
}

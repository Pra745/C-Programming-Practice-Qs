//Prints the number of digits of the inputted number.
#include <stdio.h>

int main() 
{
    int n, i, count;
    printf("Enter a number");
    scanf("%d", &n);
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("Number of digits=", count);
    return 0;
}

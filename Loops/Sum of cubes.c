//Prints the sum of cubes of N natural numbers.
#include <stdio.h>

int main() 
{
    int n, i, sum;
    printf("Enter a number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) 
        sum=sum+(i*i*i);
    printf("Sum =", sum);
    return 0;
}

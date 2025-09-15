//Prints sum of fibonacci series.
#include <stdio.h>
int main()
{
    int n, a=0, b=1, sum;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    sum=a+b;
    for (int i = 2; i < n; i++) 
    {
        b = a + b;
        a = b;
        b = a;
        sum=sum+b;
    }
    printf("Sum of fibonacci series= ", sum);
    return 0;
}

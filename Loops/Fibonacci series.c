//Prints the fibonacci series till inputted number.
#include <stdio.h>
int main()
{
    int n, a=0, b=1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("%d %d", a, b);
    for (int i = 2; i < n; i++) 
    {
        b = a + b;
        a = b;
        b = a;
        printf("%d ", b);
    }
    return 0;
}

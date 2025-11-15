//Prints the fibonacci series till inputted number.
#include <stdio.h>
int main()
{
    int n, a=0, b=1, c;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    printf("Fibonacci Series: \n");
    printf("%d %d ", a, b);
    for (int i = 2; i < n; i++) 
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    return 0;
}

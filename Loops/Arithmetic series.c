//Prints the arithmetic progression series.
#include <stdio.h>
int main()
{
    int a, n, d, c;
    printf("Enter first term, common difference, number of terms: ");
    scanf("%d %d %d", &a, &n, &d);
    printf("The arithmetic progression series is: ");
    c=a;
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", c);
        c=c+d;
    }
    return 0;
}

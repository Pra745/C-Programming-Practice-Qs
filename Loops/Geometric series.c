//Prints the geometric progression series.
#include <stdio.h>
int main()
{
    int a, n, r, c;
    printf("Enter first term, common ratio, number of terms: ");
    scanf("%d %d %d", &a, &r, &n);
    printf("The geometric progression series is: ");
    c=a;
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", c);
        c=c*r;
    }
    return 0;
}

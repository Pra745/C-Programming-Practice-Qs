#include <stdio.h>
int power(int b, int p) 
{
    if (p == 0)
        return 1;
    else
        return b * power(b, p-1); 
}

int main() 
{
    int a, b, r;
    printf("Enter base and exponent: \n");
    scanf("%d %d", &a, &b);
    if (b < 0) {
        printf("Negative exponents are not handled in this program.\n");
    } 
    else 
    {
        r= power(a,b);
        printf("%d^%d = %d\n", a, b, r);
    }
    return 0;
}

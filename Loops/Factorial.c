//Calculating the factorial of a given number.
#include <stdio.h>

int main() 
{
    int num, i, f=1;
    printf("Enter a number");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) 
    {
        f= f*i;
    }
        printf("Factorial is %d", f);

    return 0;
}

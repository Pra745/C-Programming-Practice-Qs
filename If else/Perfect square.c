//Checks if a given number is a perfect square number or not.
//Perfect square is an integer that results from an integer being multiplied by itself, or an integer raised to the power of two
#include <stdio.h>
#include <math.h>

void main()
{
    int n, s;
    float d;
    printf("Enter a number");
    scanf("%d", &n);
    d=sqrt((float)n);
    s=d;
    if((s*s)==n)
    printf("Perfect square number");
    else
    printf("Not a perfect square number");
    
}

#include <stdio.h>
void swap(int *x, int *y) 
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int main() 
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);   // call by reference
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

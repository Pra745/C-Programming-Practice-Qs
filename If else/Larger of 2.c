//Finds which number is larger among 2 given numbers.
#include <stdio.h>
void main()
{
    printf("Enter two numbers");
    int a=0, b=0;
    scanf("%d",&a); scanf("%d",&b);
    if (a>b)
    printf("%d is larger",a);
    else 
    printf("%d is larger",b);
}

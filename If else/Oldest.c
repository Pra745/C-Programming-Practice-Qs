//Finds the oldest person among three given people based on age.
#include <stdio.h>
void main()
{
    printf("Enter the ages of three people");
    int a=0, b=0, c=0;
    scanf("%d",&a,&b,&c);
    if (a>b && a>c)
    printf("%d is the oldest",a);
    else if (b>a && b>c)
    printf("%d is the oldest",b);
    else
    printf("%d is the oldest",c);
    getch();
}

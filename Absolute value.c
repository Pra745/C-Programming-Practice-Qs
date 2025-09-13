#include <stdio.h>
void main()
{
    printf("Enter a number");
    int n=0;
    scanf("%d",&n);
    if (n<0)
    printf("%d Absolue value is ",(-n));
    else
    printf("%d Absolue value is ",(n));
}

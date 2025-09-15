//Prints all the prime number in a range.
#include <stdio.h>
void main()
{
    printf("Enter two numbers for the range");
    int n=0, m=0;
    scanf("%d %d",&n, &m);
    int count=0;
    for (int a=n; a<=m; a++)
    {
        for (int i=1; i<=a;i++)
        {
             if (a/i==2)
             count++;
        }
        if (count==2)
        printf("%d ,", &n);
    }
}

//Finding if a number is armstrong or not.
//Armstrong number is that number which equals the sum of its own digits, each raised to the power of the total number of digits.
#include <stdio.h>
#include <math.h>

void main()
{
    int n, t, t2, c, d;
    double r=0.0;
    printf("Enter a number");
    scanf("%d", &n);
    t=n;
    t2=n;
    while (t2>0) 
    {
        t2= t2/10;
        ++c;
    }
    while(t>0)
    {
        d=t%10;
        r=r+pow(d,c);
        t=t/10;
    }
    if ((int)r==n)
    printf("Armstrong number");
    else
    printf("Not an armstrong number");
    getch();
}

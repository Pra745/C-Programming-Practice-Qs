//Calculates the profit or loss percentage accordingly.
#include <stdio.h>

void main()
{
    float c, s, amt, p;

    printf("Input Cost Price: ");
    scanf("%d", &c);
    printf("Input Selling Price: ");
    scanf("%d", &s);

    if(s > c)
    {  
        amt = s-c;
        p = (amt/c) * 100;
        printf("Profit percentage: %f", p);
    }  
    else if(c>s)
    {  
        amt = c-s;
        p = (amt/c) * 100;
        printf("Loss percentage: %f", p);
    }  
    else
    {  
        printf("No profit or loss percentage incurred");
    }
}

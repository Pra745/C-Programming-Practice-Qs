#include <stdio.h>

int main()
{
    int ch, n1, n2, r;
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication or 4 for division");
    scanf("%d", &ch);
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    switch (ch) 
    {
        case '1':
            r = n1+n2;
            printf("%d+%d= %d\n", n1, n2, r);
            break;
        case '2':
            r = n1-n2;
            printf("%d+%d= %d", n1, n2, r);
            break;
        case '3':
            r = n1*n2;
            printf("%d*%d= %d", n1, n2, r);
            break;
        case '4':
            if (n2 != 0) 
            { 
                r = n1/n2;
                printf("%d/%d= %d", n1, n2, r);
            } 
            else 
                printf("Division by zero is not allowed.");
            break;
        default:
            printf("Invalid input");
            break;
        }
    return 0;
}

#include <stdio.h>

int main() 
{
    int num;
    printf("Enter any integer to check if it's even or odd");
    scanf("%d", &num);
    switch (num % 2) 
    {
        case 0:
            printf("%d is an Even number.", num);
            break;
        case 1:
            printf("%d is an Odd number.", num);
            break;
        // No default case is strictly necessary here as num % 2 will always be 0 or 1 for integers
    }

    return 0;
}

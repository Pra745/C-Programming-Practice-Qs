//Using goto to repeat input until a positive number is entered.
#include <stdio.h>
int main() 
{
    int num;
    start:
    printf("Enter a positive number:\n");
    scanf("%d", &num);
    if (num <= 0) 
    {
        printf("Invalid input! Try again.\n");
        goto start;  // jump back to the label
    }
    printf("You entered a positive number: %d\n", num);
    return 0;
}

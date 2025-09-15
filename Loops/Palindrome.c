//Checks if a number is palindrome or not.
#include <stdio.h>

int main() 
{
    int num, r = 0, d, tn;
    printf("Enter a number: ");
    scanf("%d", &num);
    tn = num;
    while (num != 0) 
    {
        d = num % 10;
        r = r * 10 + d;
        num=num/10;
    }
    if (tn == r) 
        printf("Palindrome number.");
    else 
        printf("Not a palindrome number.");

    return 0;
}

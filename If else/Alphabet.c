//Checking if the inputted character is an alphabet or not
#include <stdio.h>
void main()
{
    printf("Enter a character");
    char ch=' ';
    scanf("%c",&ch);
    if ((ch>'a' && ch<'z') || (ch>'A' && ch<'Z'))
    printf("%c is an alphabet",ch);
    else
    printf("%c is not an alphabet",ch);
}

//Checks if the character is upper case or lower case or a digit or a special character.
#include <stdio.h>
void main()
{
    printf("Enter a character");
    char ch=' ';
    scanf("%c",&ch);
    if (ch>'a' && ch<'z')
    printf("%c is lowercase",ch);
    else if (ch>'A' && ch<'Z')
    printf("%c is uppercase",ch);
    else if (ch>'0' && ch<'9')
    printf("%c is a digit",ch);
    else
    printf("%c is a special character",ch);
}

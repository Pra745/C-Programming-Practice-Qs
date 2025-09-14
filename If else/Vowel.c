//Checks if a character is a vowel or a consonant
#include <stdio.h>
void main()
{
    printf("Enter a character");
    char ch=' ';
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    printf("%c is a vowel",ch);
    else
    printf("%c is a consonant",ch);
}

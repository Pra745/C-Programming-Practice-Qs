#include <stdio.h>
#include <ctype.h>
int main() 
{
    char str[100];
    int i, v = 0, c = 0;
    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = tolower(str[i]); // make checking easy
        if ((ch >= 'a' && ch <= 'z')) 
        {// only alphabets count
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                v++;
            else
                c++;
        }
    }
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    return 0;
}

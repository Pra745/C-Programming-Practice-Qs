#include <stdio.h>

int main()
{
    char ch;
    printf("Enter character");
    scanf("%c", &ch);
    switch ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? 1 : (ch >= '0' && ch <= '9') ? 2 : 3 ) 
    {
        case 1:
            printf("%c is an alphabet.", ch);
            break;
        case 2:
            printf("%c is a digit.", ch);
            break;
        case 3:
            printf("%c is a special symbol.", ch);
            break;
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], str2[100];
    int i, j, len;
    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    // Remove newline from fgets
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    for (i = 0, j = len - 1; j >= 0; i++, j--) 
    {
        str2[i] = str[j];
    }
    str2[i] = '\0';
    if (strcmp(str, str2) == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);
    return 0;
}

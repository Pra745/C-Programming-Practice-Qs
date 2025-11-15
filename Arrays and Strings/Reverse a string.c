#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[100], str2[100];
    int i, j, len;
    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    len=strlen(str);
    for (i = 0, j=len-1; j>=0; i++, j--) 
    {
        str2[i]=str[j];
    }
    str2[len]='\0';
    printf("Original string: %s", str);
    printf("Reversed string: %s", str2);
    return 0;
}

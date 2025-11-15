#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str1[100], str2[100], str3[200];
    int i, j, k;
    printf("Enter two strings: \n");
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    // remove trailing newline if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    for (i = 0; str1[i]!='\0'; i++) 
    {
        str3[i]=str1[i];
    }
    k=i;
    for (j=0; str2[j]!='\0'; j++,k++)
    {
        str3[k]=str2[j];
    }
    str3[k]='\0';
    printf("Concatenated string: %s\n", str3);
    return 0;
}

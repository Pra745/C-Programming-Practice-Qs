#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll;
    char name[50];
    int marks;
};

int main() 
{
    struct Student s1;
    printf("Enter student roll number: ");
    scanf("%d", &s1.roll);
    getchar();
    printf("Enter student name: ");
    fgets(s1.name,50,stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';   // remove newline from fgets
    printf("Enter marks: ");
    scanf("%d", &s1.marks);
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %d\n", s1.marks);
    return 0;
}

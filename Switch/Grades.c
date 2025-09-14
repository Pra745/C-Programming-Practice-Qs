#include <stdio.h>

int main() 
{
    int marks;
    printf("Enter your marks (0-100)");
    scanf("%d", &marks);
    int grade_category = marks / 10;
    switch (grade_category) 
    {
        case 10: // Marks 100
        case 9:  // Marks 90-99
            printf("Your grade is A");
            break;
        case 8:  // Marks 80-89
            printf("Your grade is B");
            break;
        case 7:  // Marks 70-79
            printf("Your grade is C");
            break;
        case 6:  // Marks 60-69
            printf("Your grade is D");
            break;
        default: // Marks 0-59
            printf("Your grade is F");
            break;
    }

    return 0;
}

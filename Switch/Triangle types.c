#include <stdio.h>

int main() 
{
    int s1, s2, s3;
    int choice;
    while (1) 
    {
        printf("Triangle Type Checker Menu:\n");
        printf("1. Check Triangle Type\n");
        printf("2. Exit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter the three sides of the triangle: ");
                scanf("%d %d %d", &s1, &s2, &s3);
                if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)) 
                {
                    switch ((s1 == s2) + (s2 == s3) + (s3 == s1)) 
                    {
                        case 3:
                            printf("The triangle is Equilateral.");
                            break;
                        case 1:
                            printf("The triangle is Isosceles.");
                            break;
                        default:
                            printf("The triangle is Scalene.");
                            break;
                    }
                } else 
                    printf("The given sides do not form a valid triangle.");
                break;
            case 2:
                printf("Exiting program.");
                return 0;
            default:
                printf("Invalid choice. Please enter 1 or 2.");
        }
    }
    return 0;
}

#include <stdio.h>

void printSquare(int size) 
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printRightTriangle(int rows) 
{
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printPyramid(int rows) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < rows - i - 1; j++) 
            printf(" ");
        for (int k = 0; k <= 2 * i; k++) 
            printf("*");
        printf("\n");
    }
}

int main() 
{
    int choice, size;

    do {
        printf("Pattern Printing Menu:\n");
        printf("1. Print Square\n");
        printf("2. Print Right Triangle\n");
        printf("3. Print Pyramid\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter the size of the square: ");
                scanf("%d", &size);
                printSquare(size);
                break;
            case 2:
                printf("Enter the number of rows for the right triangle: ");
                scanf("%d", &size);
                printRightTriangle(size);
                break;
            case 3:
                printf("Enter the number of rows for the pyramid: ");
                scanf("%d", &size);
                printPyramid(size);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

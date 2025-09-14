#include <stdio.h>
#include <math.h>

int main() 
{
    int choice;
    float radius, length, breadth, base, height, side1, side2, side3, s, area;
    const float PI = 3.14159; // Define PI as a constant

    do {
        printf("Area Calculation Menu:\n");
        printf("1. Calculate Area of Circle\n");
        printf("2. Calculate Area of Rectangle\n");
        printf("3. Calculate Area of Triangle (using base and height)\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                printf("Area of the circle: %.2f", area);
                break;
            case 2:
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the breadth of the rectangle: ");
                scanf("%f", &breadth);
                area = length * breadth;
                printf("Area of the rectangle: %.2f", area);
                break;
            case 3:
                printf("Enter the base of the triangle: ");
                scanf("%f", &base);
                printf("Enter the height of the triangle: ");
                scanf("%f", &height);
                area = 0.5 * base * height;
                printf("Area of the triangle: %.2f", area);
                break;
            case 5:
                printf("Exiting program.");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.");
        }
    } while (choice != 5);

    return 0;
}

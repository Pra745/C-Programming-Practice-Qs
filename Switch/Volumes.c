#include <stdio.h>
#include <math.h>

int main() 
{
    int choice;
    double s, l, b, h, r;
    double volume;
    const float PI=3.14159;

    do {
        printf("Volume Calculator Menu:\n");
        printf("1. Volume of Cube\n");
        printf("2. Volume of Cuboid\n");
        printf("3. Volume of Sphere\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the side length of the cube: ");
                scanf("%lf", &s);
                volume = s * s * s;
                printf("Volume of Cube: %.2lf\n", volume);
                break;
            case 2:
                printf("Enter the length, breadth, and height of the cuboid: ");
                scanf("%lf %lf %lf", &l, &b, &h);
                volume = l * b * h;
                printf("Volume of Cuboid: %.2lf\n", volume);
                break;
            case 3:
                printf("Enter the radius of the sphere: ");
                scanf("%lf", &r);
                volume = (4.0 / 3.0) * PI * pow(r, 3);
                printf("Volume of Sphere: %.2lf\n", volume);
                break;
            case 4:
                printf("Exiting the program.");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.");
        }
    } while (choice != 4);

    return 0;
}

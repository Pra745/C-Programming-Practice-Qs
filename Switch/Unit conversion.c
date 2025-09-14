#include <stdio.h>

int main() 
{
    int choice;
    float n, cn;

    do {
        printf("Unit Conversion Menu:\n");
        printf("1. Kilometers to Meters (km -> m)\n");
        printf("2. Meters to Centimeters (m -> cm)\n");
        printf("3. Centimeters to Millimeters (cm -> mm)\n");
        printf("4. Meters to Kilometers (m -> km)\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter value in Kilometers: ");
                scanf("%f", &n);
                cn = n * 1000;
                printf("%.2f km = %.2f m\n", n, cn);
                break;
            case 2:
                printf("Enter value in Meters: ");
                scanf("%f", &n);
                cn = n * 100; 
                printf("%.2f m = %.2f cm\n", n, cn);
                break;
            case 3:
                printf("Enter value in Centimeters: ");
                scanf("%f", &n);
                cn = n * 10; 
                printf("%.2f cm = %.2f mm\n", n, cn);
                break;
            case 4:
                printf("Enter value in Meters: ");
                scanf("%f", &n);
                cn = n / 1000; 
                printf("%.2f m = %.2f km\n", n, cn);
                break;
            case 5:
                printf("Exiting program.");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.");
        }
    } while (choice != 5); // Loop until the user chooses to exit

    return 0;
}

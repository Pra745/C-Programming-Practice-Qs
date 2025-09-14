#include <stdio.h>
#include <math.h>

int main() 
{
    int choice;
    float p, r, t;
    float SI, CI;

    do {
        printf("Interest Calculator Menu:\n");
        printf("1. Calculate Simple Interest\n");
        printf("2. Calculate Compound Interest\n");
        printf("3. Exit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter Principal Amount: ");
                scanf("%f", &p);
                printf("Enter Rate of Interest (in percentage): ");
                scanf("%f", &r);
                printf("Enter Time Period (in years): ");
                scanf("%f", &t);

                SI = (p * r * t) / 100;
                printf("Simple Interest: %.2f\n", SI);
                break;
            case 2:
                printf("Enter Principal Amount: ");
                scanf("%f", &p);
                printf("Enter Rate of Interest (in percentage): ");
                scanf("%f", &r);
                printf("Enter Time Period (in years): ");
                scanf("%f", &t);
                r = r / 100; 
                CI = p * (pow(1 + r, t) - 1);
                printf("Compound Interest: %.2f\n", CI);
                break;
            case 3:
                printf("Exiting program.");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.");
                break;
        }
    } while (choice != 3);

    return 0;
}

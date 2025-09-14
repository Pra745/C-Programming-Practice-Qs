#include <stdio.h>

int main() 
{
    int choice;
    float balance = 1000.00; // Initial balance
    float amount;

    do {
        printf("ATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Cash\n");
        printf("3. Withdraw Cash\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                    balance += amount;
                    printf("Deposit successful. New balance: %.2f\n", balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: %.2f\n", balance);
                } 
                else if (amount > balance) 
                    printf("Insufficient balance.");
                else 
                    printf("Invalid withdrawal amount.");
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice. Please try again.");
        }
    } while (choice!=4);

    return 0; 
}

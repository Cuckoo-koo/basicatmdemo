#include <stdio.h>

int main()
{
    int pass = 1369;
    int userpin;
    int choice;
    float balance = 1000.00; // Initial balance
    float amount;

    printf("================================\n");
    printf("     ALEX ATM SIMULATOR\n");
    printf("================================\n");

    printf("Enter PIN: ");
    scanf("%d", &userpin);

    if(userpin != pass)
    {
        printf("Login Failed!\n");
         printf("Login Successful!\n");
        return 0;
    }

   

    while(1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance += amount;
                    printf("₹%.2f deposited successfully!\n", amount);
                }
                else
                {
                    printf("Invalid amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else if(amount > balance)
                {
                    printf("Insufficient balance!\n");
                }
                else
                {
                    balance -= amount;
                    printf("₹%.2f withdrawn successfully!\n", amount);
                }
                break;

            case 3:
                printf("Current Balance: ₹%.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using Alex ATM!\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

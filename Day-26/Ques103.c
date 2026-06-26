#include <stdio.h>
int main()
{
    int balance=1000,choice, amount;
    do{
        printf("\nATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            printf("Balance = %d",balance);
            break;
            case 2:
            printf("Enter deposit amount: ");
            scanf("%d",&amount);
            balance += amount;
            printf("Updates Balance = %d",balance);
            break;
            case 3:
            printf("Enter withdraw amount: ");
            scanf("%d",&amount);
            if (amount<=balance)
            {
              balance-=amount;
              printf("Updates Balance = %d",balance);
            }
            else{
                printf("Insufficient funds!");
            }
            break;
            case4:
            printf("Thank you for using ATM.");
            break;
            default:
            printf("Invalid choice!");
        }
    }
    while (choice!=4);
    return 0;
}
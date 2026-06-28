#include <stdio.h>
struct Account
{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    struct Account a;
    int choice;
    float amount;
    printf("Enter Account No, Name, Balance: ");
    scanf("%d%s%f",&a.accNo,&a.name,&a.balance);
    do
    {
        printf("Bank Menu: \n. Deposit\n. Withdraw\n. Check Balance\n. Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter deposit amount: ");
            scanf("%f",&amount);
            a.balance+=amount;
            printf("Updates Balance = %.2f\n",a.balance);
            break;
        case2:
            printf("Enter withdraw amount: ");
            scanf("%f",&amount);
            if(amount<=a.balance)
            {
                a.balance-=amount;
                printf("Updates Balance = %.2f\n",a.balance);
            }
            else
            {
                printf("Insufficient funds!\n");
            }
            break;
        case 3:
            printf("Balance = %.2f\n",a.balance);
            break;
        case 4:
            printf("Thank you for banking\n");
            break;                                  
        default:
            printf("Invalid choice!\n");
        }
    } while (choice!=4);
    return 0;
}

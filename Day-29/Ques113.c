#include <stdio.h>
int main()
{
    int choice;
    float a,b;
    do{
        printf("\nCalculator Menu:\n Add\n Subtract\n Multiply\n Divide\n Exit\n");
        scanf("%d",&choice);
        if(choice>=1&&choice<=4)
        {
            printf("Enter two numbers: ");
            scanf("%f%f",&a,&b);
        }
        switch (choice)
        {
        case 1:
            printf("Result = %2f",a+b);
            break;
        case 2:
            printf("Result = %2f",a-b);
            break;
        case 3:
            printf("Result = %2f",a*b);
            break;
        case 4:
        if(b!=0)
            printf("Result = %2f",a/b);
            else
            printf("Division by zero not allowed!");
            break;
        case 5:
            printf("Exiting calculator\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
    }
    while(choice!=5);
    return 0;
}
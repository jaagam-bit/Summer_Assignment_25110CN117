#include <stdio.h>
int main()
{
    int arr[5],choice,i,sum=0;
    printf("Enter 5 element: ");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    do{
        printf("\nArray Menu:\n Display\n Sum\n Max\n Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            for(i=0;i<5;i++)
            printf("%d",arr[i]);
            printf("\n");
            break;
        case 2:
            for(i=0;i<5;i++)
            sum+=arr[i];
            printf("%d",arr[i]);
            break;
        case 3:
        {
            int max = arr[0];
            for(i=0;i<5;i++)
            if(arr[i]>max)
            max = arr[i];
            printf("Max = %d\n",max);
        }    
            break;
        case 4:
            printf("Exiting array system\n");
            break;
        default: 
            printf("Invalid choice!");
            break;
        }
    }
    while(choice!=4);
    return 0;
}
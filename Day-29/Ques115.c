#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int choice;
    printf("Enter a string: ");
    scanf("%s",str);
    do{
        printf("\nString Menu:\n Length\n Reverse\n Uppercase\n Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Length = %lu\n",strlen(str));
            break;
        case 2:
        {
            int i,len = strlen(str);
            printf("Reversed = ");
            for(i=len-1;i>=0;i--)
            printf("\n");
        }
            break;
        case 3:
            {
                int i;
                for(i=0;str[i]!= '\0';i++)
                {
                    if(str[i]>='a' && str[i]<='z')
                    str[i]-=32;
                }
                printf("Uppercase = %s\n",str);
            }    
            break;
        case 4:
        printf("Exiting string system\n");
        break;
        default:
        printf("Invalid choice!");
        }
    }
    while(choice!=4);
    return 0;
}
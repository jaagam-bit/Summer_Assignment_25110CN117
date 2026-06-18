#include <stdio.h>
int main()
{
    int n1,n2,i,j;
    printf("Enter the size of first array: ");
    scnaf("%d",&n1);
    int arr1[n1];
    printf("Enter the elements of array: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the element of array: ");
    for(i=0;i<n2;i++)
    {                           
        scanf("%d",&arr2[i]);
    }
    printf("Common of arrays: ");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[i])
            {
                printf("%d",arr1[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
    
}
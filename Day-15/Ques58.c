#include <stdio.h>
int main()
{
    int n,i,temp;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("Array after left rotation: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
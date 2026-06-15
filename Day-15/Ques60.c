#include <stdio.h>
int main()
{
    int i,n,j=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n],result[n];
    printf("Enter element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            result[j++]=arr[i];
        }
    }
    while(j<n)
    {
        result[j++]=0;
    }
    printf("Array after moving all zeroes to end: ");
    for(i=0;i<n;i++)
    {
        printf("%d",result[i]);
    }
    printf("\n");
    return 0;
}
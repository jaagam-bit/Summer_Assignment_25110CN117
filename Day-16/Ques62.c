#include <stdio.h>
int main()
{
    int n,i,j,maxCount=0,element;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count>maxCount)
        {
            maxCount=count;element=arr[i];
        }
    }
    printf("Most frequent element is %d and it appears %d times",element,maxCount);
    return 0;
}
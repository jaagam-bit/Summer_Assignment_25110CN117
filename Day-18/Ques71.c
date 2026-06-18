#include <stdio.h>
int binarySearch(int arr[],int  n,int k)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==k)
        return mid;
        else if (arr[mid]<k) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main()
{
    int n,i,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&k);
    int result = binarySearch(arr,n,k);
    if(result != -1)
        printf("Element %d found at position %d", k, result+1);
    else
        printf("Element %d not found", k);
    return 0;
}
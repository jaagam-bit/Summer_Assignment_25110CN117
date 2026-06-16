#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n-1];
    printf("Enter the missing element: ");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int total=n*(n+1)/2;
    printf("Missing number=%d",total-sum);
    return 0;
}
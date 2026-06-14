#include <stdio.h>
int main()
{
    int n,i,largest,second;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=second=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        else if (arr[i]>second && arr[i] != largest)
        {
            second=arr[i];
        }
    }
    printf("Second largest element is %d",second);
    return 0;
}
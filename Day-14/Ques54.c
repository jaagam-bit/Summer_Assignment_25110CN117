#include <stdio.h>
int main()
{
    int n,i,f,count=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(arr[i]==f)
        {
            count++;
        }
    }
    printf("Entered element %d is found %d times",f,count);
    return 0;
}
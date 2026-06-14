#include <stdio.h>
int main()
{
    int n,i, f,found=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&f);
    for (i=0;i<n;i++)
    {
        if(arr[i]==f){
        printf("Entered element %d is found ",f);
        found=1;
        break;
        }
    }
    if (!found)
    {
        printf("Element %d is not found",f);
    }
    return 0;
}
#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter size of array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the element: ");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int largest = arr[0],smallest = arr[0];
for(i=1;i<n;i++)
{
    if(arr[i]>largest) largest = arr[i];
    if(arr[i]<smallest) smallest = arr[i];
}
printf("Largest = %d ",largest);
printf("\n");
printf("Smallest = %d",smallest);
return 0;
}
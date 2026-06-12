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
    sum+=arr[i];
}
float avg = (float)sum/n;
printf("Sum = %d ",sum);
printf("\n");
printf("Average = %2f",avg);
return 0;
}
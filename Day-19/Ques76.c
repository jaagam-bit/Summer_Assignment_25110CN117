#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter rows and coloum: ");
    scanf("%d %d",&n,&n);
    int a[n][n], sum=0;
    printf("Enter elements of matrix: ");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        sum+=a[i][i];
        sum+=a[i][n-i-1];
    }
    if(n%2==1)
    {
        sum-=a[n/2][n/2];
    }
    printf("Sum od diagonal =%d",sum);
    return 0;
}
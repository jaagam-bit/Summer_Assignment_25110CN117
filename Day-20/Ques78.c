#include <stdio.h>
int main()
{
    int n,i,j,flag=1;
    printf("Enter size of aquare matrix: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter element of matrix: ");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
    }
    if(flag)
    printf("Matrix is Symmetric");
    else 
    printf("Matrix is not Symmetric");
    return 0;
}
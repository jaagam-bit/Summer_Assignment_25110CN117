#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter rows and coloum: ");
    scanf("%d %d",&r,&c);
    int a[r][c], b[r][c], sum[r][c];
    printf("Enter element of first matrix: ");
    for(i=0;i<r;i++)
    for (j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    printf("Enter element of second matrix: ");
    for(i=0;i<r;i++)
    for (j=0;j<c;j++)
    scanf("%d",&b[i][j]);
    for(i=0;i<r;i++)
    for (j=0;j<c;j++)
    sum[i][j]=a[i][j]+b[i][j];
    printf("Sum of matrices: ");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
            printf("%d",sum[i][j]);
        printf("\n");
    }
    return 0;
}
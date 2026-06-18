#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter rows and coloum: ");
    scanf("%d %d",&r,&c);
    int a[r][c], trans[c][r];
    printf("Enter elements of matrix: ");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    trans[j][i]=a[i][j];
    printf("Transpose of matrix: ");
    for(i=0;i<c;i++)
    for(j=0;j<r;j++)
    printf("%d",trans[i][j]);
    printf("\n");
    return 0;
}
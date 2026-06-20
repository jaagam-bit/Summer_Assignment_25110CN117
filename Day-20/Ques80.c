#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter rows,columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter element of matrix: ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++) {
        int sum = 0;
        for(j=0;j<c;j++)
            sum += a[i][j];
        printf("Sum of row %d = %d\n", j + 1, sum);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i,n,r;
    printf("Enter the number for multiplication table: \n");
    if (scanf("%d",&n)!=1){
        printf("Invalid input \n");
        return 1;
    }
    printf("Enter the range in positive integer number: \n");
    if (scanf("%d",&r)!=1 || r<=0){
        printf("Invalid input \n");
        return 1;
    }
    printf("Multiplication Table of %d up to %d:\n", n,r);
    for(i=1;i<=r;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}
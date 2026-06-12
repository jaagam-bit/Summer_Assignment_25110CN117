#include <stdio.h>
int main()
{
    int n,i,x,result =1;
    printf("Enter base (x): ");
    scanf("%d",&x);
    printf("Enter number (n): ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result*=x;
        printf("%d^%d = %d\n",x,n,result);
    }
    return 0;
}
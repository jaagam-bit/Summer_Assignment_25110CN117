#include <stdio.h>
int main()
{
    int n, pro=1,rem;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
         rem=n%10;
        pro*= rem;
        n/=10;
    }
    printf("Product of digit = %d\n",pro);
    return 0;
}
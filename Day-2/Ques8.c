#include <stdio.h>
int main()
{
    int n, rem,rev=0,original;
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("Sum of digit = %d\n",rev);
    return 0;
}
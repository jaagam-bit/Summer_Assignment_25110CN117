#include <stdio.h>
int isPalimrome(int n)
{
int orginal =n, reversed=0,digit;
while(n>0)
{
    digit=n%10;
    reversed = reversed*10+digit;
    n/=10;
}
return (orginal==reversed);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (isPalimrome(n))
        printf("%d is Palidrome",n);
    else
        printf("%d is not Palidrome",n);
    return 0;
}
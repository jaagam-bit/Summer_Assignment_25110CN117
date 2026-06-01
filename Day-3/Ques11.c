#include <stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    printf("GCD = %d\n",a);
    return 0;
}
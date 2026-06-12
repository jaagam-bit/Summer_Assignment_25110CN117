#include <Stdio.h>
int isPerfect(int n)
{
int sum =0;
for(int i=1;i<=n/2;i++)
{
if(n%i==0) sum+=i;
}
return (sum==n);
}
int main()
{
    int n;
    print("Enter a number:");
    scanf("%d",&n);
    if(isPerfect(n))
    printf("%d is a perfect number",n);
    else
    printf("%d is not a perfect number",n);
    return 0;
}
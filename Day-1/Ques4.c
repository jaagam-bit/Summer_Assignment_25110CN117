#include <stdio.h>
int main()
    {
        int n,temp;
        int count=0;
        printf("Enter an integer: ");
        scanf("%d",&n);
        temp = n;
        if (temp ==0)
        {
            count=1;
        }
        else 
        {
            while (temp !=0)
            {
                temp=temp/10;
                count++;
            }
        }
        printf("The number of digits in %d is; %d\n",n,count);
        return 0;
    }
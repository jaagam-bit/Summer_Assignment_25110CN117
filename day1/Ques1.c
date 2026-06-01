#include <stdio.h>
int main()
{
   int n,i;
   int sum=0;
   printf("Enter a positive integer number: ");
   scanf("%d",&n);
   if(n<1){
   printf("The Enter natural number greater than 0 \n");
   }
   else 
   {
      for (i=1;i<=n;i++)
      sum+=i;
   }
   {printf("The sum of First %d natural number is: %d\n",n,sum);
   }
   return 0;
}
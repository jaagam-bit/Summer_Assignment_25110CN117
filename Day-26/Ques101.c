#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,guess;
    srand(time(0));
    num=rand()%100+1;
    printf("Guess the number (1-100): ");
    do{
        scanf("%d",&guess);
        if(guess>num)
        printf("Too high! Try again: ");
        else if (guess<num)
        printf("Too low! Try again: ");
    }
    while (guess!=num);
    printf("Correct! The number was %d",num);
   return 0;
}
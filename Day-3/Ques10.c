#include <stdio.h>
int main() {
    int s,e,i,j,prime;
    printf("Enter the starting number: ");
    scanf("%d", &s);
    printf("Enter the ending number: ");
    scanf("%d", &e);
    printf("Prime numbers between %d and %d are:\n",s,e);

    for (i = s; i <= e; i++) {
        if (i <= 1) 
            continue;  

        prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;  // found divisor, not prime
                break;
            }
        }

        if (prime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

#include <stdio.h>
#include <math.h>
int main() {
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        int originalNum = num, remainder, n = 0;
        double result = 0.0;
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        if ((int)result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
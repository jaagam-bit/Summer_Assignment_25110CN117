#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main() {
    struct Student s;
    printf("Enter Roll, Name: ");
    scanf("%d %s", &s.roll, s.name);

    s.total = 0;
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.percentage = s.total / 3.0;

    printf("\nMarksheet:\n");
    printf("Roll: %d, Name: %s\n", s.roll, s.name);
    printf("Total Marks: %d, Percentage: %.2f%%\n", s.total, s.percentage);

    if (s.percentage >= 60) printf("Result: First Division\n");
    else if (s.percentage >= 45) printf("Result: Second Division\n");
    else printf("Result: Fail\n");

    return 0;
}

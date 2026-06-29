#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

void input(struct Student *s) {
    printf("Enter Roll and Name: ");
    scanf("%d %49s", &s->roll, s->name);

    s->total = 0;
    for (int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &s->marks[i]);
        s->total += s->marks[i];
    }

    s->percentage = s->total / 3.0f;
}

void display(const struct Student *s) {
    printf("\nMarksheet:\n");
    printf("Roll: %d, Name: %s\n", s->roll, s->name);
    printf("Total: %d, Percentage: %.2f%%\n", s->total, s->percentage);
}

int main() {
    struct Student s[2];

    for (int i = 0; i < 2; i++) {
        input(&s[i]);
    }

    for (int i = 0; i < 2; i++) {
        display(&s[i]);
    }

    return 0;
}

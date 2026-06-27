#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int age;
};
int main()
{
    struct Student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Roll, Name, Age for student %d\n: ",i+1);
        scanf("%d%s%d",&s[i].roll,&s[i].name,&s[i].age);
    }
    printf("Student Rcords: ");
    for(int i=0;i<3;i++)
    {
        printf("Roll: %d,Name: %s,Age: %d\n",s[i].roll,s[i].name,s[i].age);
    }
    return 0;
}

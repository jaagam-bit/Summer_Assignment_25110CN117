#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee e[2];
    {
        for(int i=0;i<2;i++)
        {
            printf("Enter ID, Name, Salary for employee %d:\n",i+1);
            scanf("%d%s%f",&e[i].id,&e[i].name,&e[i].salary);
        }
        printf("\nEmployee Records:\n");
        for(int i=0;i<2;i++)
        printf("ID: %d, Nmae: %s, Salary: %.2f\n",e[i].id, e[i].name, e[i].salary);
    }
    return 0;
}

#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    int salary;
};
int main()
{
    struct Employee e[20];
    for(int i=0;i<2;i++)
    {
        printf("Enter ID, Nmae, Salary for employee %d:\n",i+1);
        scanf("%d%s%f",&e[i].id,&e[i].name,&e[i].salary);   
    }
    printf("Employee Records: ");
    for(int i=0;i<2;i++)
    {
        printf("ID: %d,Name: %s,Salary: %2f\n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}

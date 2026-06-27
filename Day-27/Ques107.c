#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float basic,hra,da,gross;
};
int main()
{
    struct Employee e;
    printf("Enter ID, Nmae, Basic Salary: ");
        scanf("%d%s%f",&e.id,&e.name,&e.basic);
        e.hra=e.basic*0.2;
        e.da=e.basic*0.1;
        e.gross=e.basic+e.hra+e.da;
        printf("Salary Details: ");
        printf("ID: %d,Name: %s\n",e.id,e.name);
        printf("Basic: %2f, Hra: %2f,Da: %2f, Gross: %2f\n",e.basic,e.hra,e.da,e.gross);
    return 0;                           
}
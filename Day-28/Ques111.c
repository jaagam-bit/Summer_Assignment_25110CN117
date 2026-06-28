#include <stdio.h>
struct Ticket
{
    int id;
    char name[50];
    char destination[50];
};
int main()
{
    struct Ticket t;
    printf("Enter Ticket Id, name, Destination: ");
    scanf("%d%s%s",&t.id,&t.name,&t.destination);
    printf("Ticket Details: ");
    printf("Id: %d, Name: %s, Destination: %s\n",t.id,t.name,t.destination);
    return 0;
}

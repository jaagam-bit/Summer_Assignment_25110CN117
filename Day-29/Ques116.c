#include <stdio.h>
struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct Item item[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter ID, Name, Quantity, Price for item %d:\n",i+1);
        scanf("%d%s%d%f",&item[i].id,&item[i].name,&item[i].quantity,&item[i].price);
    }
    printf("\nInventory Record:\n");
    for(int i=0;i<2;i++)
    {
        printf("ID: %d ,Name: %s, Quantity: %d, Price: %2f\n\n",item[i].id,item[i].name,item[i].quantity,item[i].price);
    }
    return 0;
}

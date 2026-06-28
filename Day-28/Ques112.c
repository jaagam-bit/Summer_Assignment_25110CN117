#include <stdio.h>
struct Contact
{
    char name[50];
    char phone[15];
};
int main()
{
    struct Contact c[2];
        for(int i=0;i<2;i++)
        {
            printf("Enter Name and Phone for contact %d: ",i+1);
            scanf("%s%s",&c[i].name,&c[i].phone);
        }
        printf("Contact List: \n");
        for(int i=0;i<2;i++)
        {
            printf("Name: %s, Phone: %s\n",c[i].name,c[i].phone);
        }
        return 0;
}

#include <stdio.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
int main()
{
    struct Book b[2];
        for(int i=0;i<2;i++)
        {
            printf("Enter ID, Title, Author for book %d: ",i+1);
            scanf("%d%s%s",&b[i].id,&b[i].title,&b[i].author);
        }
        printf("Library Records: \n");
        for(int i=0;i<2;i++)
        {
            printf("ID: %d, Title: %s, Author: %s\n",b[i].id,b[i].title,b[i].author);
        }
        return 0;
}

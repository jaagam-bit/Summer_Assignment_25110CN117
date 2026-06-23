#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int freq[256]={0},i,max=0;
    char result;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        freq[(unsigned char)str[i]]++;
        if(freq[(unsigned char)str[i]]>max)
        {
            max=freq[(unsigned char)str[i]];
            result=str[i];
        }
    }
    printf("Maximum occurring character = %c (appears %d times)",result,max);
    return 0;
}
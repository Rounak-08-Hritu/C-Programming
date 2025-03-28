#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char str[99990];
    gets(str);
    for(i=0;str{i}!='\0';i++)
    {
        if(str[i]==' ')
            c++;
    }
    if(c>0)
        c++;
    printf("%d",c);
 return 0;
}


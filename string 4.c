#include<stdio.h>
#include<string.h>
int main()
{
    int sz;
    char c[200];
    gets(c);
    printf("%s\n",c);
    sz=strlen(c);
    printf("%d",sz);

    return 0;
}


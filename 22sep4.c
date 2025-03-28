#include<stdio.h>
main()
{

    int fact=1,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("Factorial Value=%d",fact);
}

#include<stdio.h>
main()
{
    int i,n,fact=1,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i!=n)
        {
            printf("%d!+",i);
        }
        else
        {
            printf("%d!",i);
        }
        fact=fact*i;
        sum=sum+fact;
        i++;
    }
    printf("\nsum=%d",sum);
}


#include<stdio.h>
main()
{
    int i,n,fact=1,sum=0;
    scanf("%d",&n);
    i=1;
    do
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
        while(i<=n);
    printf("\nsum=%d",sum);
}



#include<stdio.h>
main()
{
    int i,n,fact=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
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

    }
    printf("\nsum=%d",sum);
}

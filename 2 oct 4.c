#include<stdio.h>
main()
{
    int i ,n,sum=0;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {


       if(i!=n)
            {printf("%d+",i);}
        else
            {printf("%d",i);}
        sum=sum+i;

    }
    printf("\nsum=%d",sum);
}


#include<stdio.h>
main()
{
    int i ,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {


       if(i!=n)
            {printf("%d+",i);}
        else
            {printf("%d",i);}
        sum=sum+i;

    }
    printf("\nsum=%d",sum);
}

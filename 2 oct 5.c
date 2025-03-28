#include<stdio.h>
main()
{
    int i ,n,sum=0;
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {


       if(i!=n)
            {printf("%d+",i);}
        else
            {printf("%d",i);}
        sum=sum+i;
        i=i+2;

    }
    printf("\nsum=%d",sum);
}



#include<stdio.h>
main()
{
    int i ,n,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {


       if(i!=n)
            {printf("%d+",i);}
        else
            {printf("%d",i);}
        sum=sum+i;
        i++;

    }
    printf("\nsum=%d",sum);
}


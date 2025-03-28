#include<stdio.h>
main()
{
    int i ,n,sum=0;
    scanf("%d",&n);
    i=1;
    do
    {


       if(i!=n)
            {printf("%d+",i);}
        else
            {printf("%d",i);}
        sum=sum+i;
        i++;

    }
    while(i<=n);
    printf("\nsum=%d",sum);
}



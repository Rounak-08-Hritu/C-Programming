#include<stdio.h>
main()
{
    int i,n;
    float sum=0;
    scanf("%d",&n);
    i=1;
    do
    {

        if(i!=n && i!=1)
        {
            printf("1/%d+",i);
        }
        else if(i==1)
            printf("%d+",i);
        else
        {
            printf("1/%d",i);
        }
        sum=sum+(1/(float)i);
        i++;

    }
    while(i<=n);
    printf("\nsum=%f",sum);
}

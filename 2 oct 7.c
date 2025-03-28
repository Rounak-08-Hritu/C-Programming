#include<stdio.h>
#include<math.h>
main()
{
    int i,n,power,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        power=pow(i,2);
        if(i==n)
            printf("%d",power);
        else
            printf("%d+",power);
        sum=sum+power;
    }
    printf("\nsum=%d",sum);
}

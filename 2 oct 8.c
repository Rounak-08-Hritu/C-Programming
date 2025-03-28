#include<stdio.h>
#include<math.h>
main()
{
    int i,n,power,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        power=pow(i,2);
        if(i==n)
            printf("%d",power);
        else
            printf("%d+",power);
        sum=sum+power;
        i++;
    }
    printf("\nsum=%d",sum);
}


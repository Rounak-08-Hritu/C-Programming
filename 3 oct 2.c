//Perfect' number or no
#include<stdio.h>
main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;

    }
     printf("sum=%d\n",sum);
    if(sum==n)
        printf("%d is a perfect number\n",n);
    else
        printf("NO\n");
}

#include<stdio.h>
int main()
{
    int n,x,c=0;
    scanf("%d%d",&n,&x);
    int a[n],i,j,sum;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            sum=a[i]+a[j];
            if(sum==x )
            {
                printf("%d %d\n",i,j);
                c++;
            }
            else
                continue;
        }
    }
    if(c==0)
        printf("IMPOSSIBLE\n");

    return 0;
}

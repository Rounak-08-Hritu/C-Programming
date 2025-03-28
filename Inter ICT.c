#include<stdio.h>
int main()
{
    int i,n,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=(b*2)%1000000007;
    }
    printf("%d",b);

    return 0;
}

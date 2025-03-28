#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum>9)
        printf("9\n");
    else
        printf("%d\n",sum);
    return 0;
}

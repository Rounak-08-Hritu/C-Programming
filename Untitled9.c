#include<stdio.h>
int main()
{
    int n,k,h,p,i,j,d1=1,m=0;
    scanf("%d %d",&n,&k);
    p=n/k;
    scanf("%d",&h);
    int d[h];
    for(i=0; i<h; i++)
    {
        scanf("%d",&d[i]);
    }
    for(j=0; j<p; j++)
    {
        d1=d1+k;
        for(i=0; i<h; i++)
        {
            printf("%d ",d1);
            if(d[i]==d1)
                m++;
        }
    }
    printf("\n%d %d\n",p,m);

if(m>0)
    printf("%d\n",p+m);
else
    printf("%d\n",p);

return 0;
}


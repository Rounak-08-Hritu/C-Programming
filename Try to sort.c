#include<stdio.h>
#include<string.h>
int a[1000000];
int main()
{
    int n,i,m;
    scanf("%d",&n);
    int b[n+4];
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<n; i++)
    {
        m=b[i];
        ++a[m];
    }
    for(m=0; m<1000000; m++)
    {
        if(a[m]!=0)
        {
            for(i=1; i<=a[m]; i++)
            {
                printf("%d\n",m);
            }
        }
    }
    return 0;
}

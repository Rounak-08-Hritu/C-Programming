#include<stdio.h>
int a[200000];
int main()
{
    int n,i,m;
    scanf("%d",&n);
    int b[n];
    for(i=1;i<n-1;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<n-1;i++)
    {
        m=b[i];
        ++a[m];
    }
    for(m=1;m<n;m++)
    {
        if(a[m]==0)
           printf("%d\n",m);
    }
    return 0;
}

#include<stdio.h>
int a[200005];
int main()
{
    int n,i,m,c=0;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        m=b[i];
        ++a[m];
    }
    for(m=0;m<200005;m++)
    {
        if(a[m]!=0)
            c++;
    }
    printf("%d\n",c);




    return 0;
}


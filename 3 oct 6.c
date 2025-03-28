#include<stdio.h>
#include<limits.h>
 int main()
{
    int n,i,mx1,mx2;
    scanf("%d",&n);
    mx1=mx2=INT_MIN;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(mx1<a[i])
           {
            mx2=mx1;
            mx1=a[i];}
        else if(mx2<a[i])
        {
            mx2=a[i];
        }
    }
    printf("The second Maximum Value is:%d",mx2);
}


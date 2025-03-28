#include<stdio.h>
#include<limits.h>
 int main()
{
    int n,i,mx1,mx2,mx3;
    scanf("%d",&n);
    mx1=mx2=mx3=INT_MIN;
    int a[n];

    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);

        if(mx1<a[i])
        {
            mx3=mx2;
            mx2=mx1;
            mx1=a[i];
        }
        else if(mx2<a[i])
        {
            mx3=mx2;
            mx2=a[i];
        }
        else if(mx3<a[i])
        {
            mx3=a[i];
        }
    }

    printf("The Third Maximum Value is:%d",mx3);
}

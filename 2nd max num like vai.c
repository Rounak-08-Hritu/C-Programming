//second and third largest number in array
#include<stdio.h>
#include<limits.h>
int main()
{
    int mx1=INT_MIN,mx2=INT_MIN,mx3=INT_MIN;
    int n;
    scanf("%d",&n);
    int a[n],i=0;
    for(i=0;i<=n;i++)
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
    printf("Second maximum number: %d\nThird maximum number: %d",mx2,mx3);
   }

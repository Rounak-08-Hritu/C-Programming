#include<stdio.h>
#include<limits.h>
int main()
{
    int mx=0,n[100],i,p;
    for(i=0;i<100;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<100;i++)
    {
        if(n[i]>mx)
        {
            mx=n[i];
            p=i+1;
        }

    }
    printf("%d\n%d\n",mx,p);
    return 0;
}

#include<stdio.h>
int main()
{

    int n,i,j,c,mx;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        c=0;
        for(i=j+1;i<n;i++)
        {
            if (a[i]==a[j])
            {
                c++;
                if(c>0)
                {
                    mx=a[i];
                }
            }
        }
    }
    printf("%d",a[i]);

    return 0;
}

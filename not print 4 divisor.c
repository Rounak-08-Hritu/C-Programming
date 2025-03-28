//not divisible by 4
#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];

    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=n; i++)
    {

        if(i%4!=0)
            printf("%d_",a[i]);
    }
}


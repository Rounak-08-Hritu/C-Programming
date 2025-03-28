//write a program where 10th element won't print
#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        if(i!=10)
            printf("%d_",a[i]);
}

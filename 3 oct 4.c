 //Write a program to shift all the zero at the last of the array without using another array.
#include<stdio.h>
int main()
{
    int n,i,last,tmp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    last=n-1;
    for(i=0;i<=last;i++)
    {
        if(a[i]==0)
        {
            while (last>i)
            {
                if(a[last]!=0)
                    break;
                --last;
            }
            tmp=a[last];
            a[last]=a[i];
            a[i]=tmp;
        }
    }
    for(i=0;i<n;i++){
    printf("%d",a[i]);
}
}

#include<stdio.h>
int main()
{
    int n,i,mx;
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     mx = getMaxRepeatingElement(array, n);
    printf("\n %d",mx);
    return 0;
}

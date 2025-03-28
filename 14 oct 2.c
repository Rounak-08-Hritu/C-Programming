#include<stdio.h>
int main()
{
    int i,j,r,sum=0;
    scanf("%d",&r);
    int a[r][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
         if(i==j)
            sum=sum+a[i][j];

        }
    }
    printf("%d",sum);
}

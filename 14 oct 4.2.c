#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],sum[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
     for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {

            sum[i][j]=a[i][j]+b[i][j];

            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }

}


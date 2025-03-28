#include<stdio.h>
main()
{
    int i,j,r,c;
    scanf("%d",&r);
    int a[r][r],b[r][r],sum[r][r];
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
            scanf("%d %d",&a[i][j],&b[i][j]);
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {

            sum[i][j]=a[i][j]+b[i][j];

            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }

}


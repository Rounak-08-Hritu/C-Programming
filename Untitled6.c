#include<stdio.h>
int main()
{
    int i ,j ,k;
    int a[3][3],b[3][3],s[3][3];

        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                s[i][j]=0;
                for(k=0;k<3;k++)
                {
                    s[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",s[i][j]);
            }
            printf("\n");
        }


}


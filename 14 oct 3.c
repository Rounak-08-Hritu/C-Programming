#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],trans[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            trans[j][i]=a[i][j];


        }

    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++)
        {

            printf("%d ",trans[i][j]);

        }
 printf("\n");
    }
}

#include<stdio.h>
int main()
{
    int i,c=0;
    double sum=0.0,a[6];
    for(i=0;i<6;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0){
            c++;
            sum=sum+a[i];
        }
    }
    printf("%d valores positivos\n",c);
    printf("%.1lf",sum/c);

    return 0;
}

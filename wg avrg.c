#include<stdio.h>
int main()
{
    int n;
    double a,b,c,r;
    scanf("%d",&n);
    while(n--)
    {
       scanf("%lf %lf %lf",&a,&b,&c);
       r=(a*2+b*3+c*5)/10;
       printf("%.1lf\n",r);
    }
    return 0;
}

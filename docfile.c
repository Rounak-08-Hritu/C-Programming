#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c || b+c>a || c+a>b)
        printf("Valid\n");
    else
        printf("Not Valid\n");
    return 0;
}

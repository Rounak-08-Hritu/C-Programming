#include<stdio.h>
int main()
{
    char c[20];
    double s,b,TOTAL;
    scanf("%s",&c);
    scanf("%lf%lf",&s,&b);
    TOTAL=s+b*15/100;
    printf("SALARY = %.2lf",TOTAL);


    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,r1,r2,x;
    scanf("%lf%lf%lf",&a,&b,&c);
    if((b*b-4*a*c)<0 || a==0)
        printf("Impossivel calcular");
    else
    {
        x=sqrt((b*b)-(4*a*c));
        r1=((-b+x)/(2*a));
        r2=((-b-x)/(2*a));
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }

return 0;
}

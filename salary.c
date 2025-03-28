#include<stdio.h>
int main()
{
    double m,n;
    scanf("%lf",&m);
    if(m>=0 && m<=400.00)
    {
        n=m+m*15/100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15%%\n",n,n-m);
    }
    else if(m>400.00 && m<=800.00)
    {
        n=m+m*12/100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12%%\n",n,n-m);
    }
    else if(m>800.00 && m<=1200.00)
    {
        n=m+m*10/100;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10%%\n",n,n-m);
    }
    else if(m>1200.00 && m<= 2000.00)
    {
        n=m+m*7/100;;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7%%\n",n,n-m);
    }

    else if(m>2000.00)
    {
       n=m+m*4/100;
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4%%\n",n,n-m);
    }
    return 0;
}

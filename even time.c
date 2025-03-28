#include<stdio.h>
#include<math.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2;
    int r1,r2,r3,d;
    scanf("%d%d%d%d",&d1,&h1,&m1,&s1);
    scanf("%d%d%d%d",&d2,&h2,&m2,&s2);
    d1=s1+m1*60+h1*60*60+d1*24*60*60;
    d2=s2+m2*60+h2*60*60+d2*24*60*60;
    d=abs(d2-d1);
    r1=d/(24*3600);
    d=d%(24*3600);
    r2=d/3600;
    d=d%3600;
    r3=d/60;
    d=d%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",r1,r2,r3,d);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c>d)
    {
        d=d+60;
        e=d-c;
        if(a==b)
        {
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",e);
        }
    }
    else if(a<b)
    {
        printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",b-a,e);
    }
    else if(a>b)
    {
        printf("O JOGO DUROU %D HORA(S) E %d MINUTO(S)\n",b-a+24,e);
    }
    else {
        if(c<d)
        e=d-c;

    }

    return 0;
}

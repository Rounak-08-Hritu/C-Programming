#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==c)
    {
            printf("O JOGO DURO 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(c>a)
    {
        if(d>=b)
        {
            printf("O JOGO DURO %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
        }
        else
        {
            printf("O JOGO DURO %d HORA(S) E %d MINUTO(S)\n",c-a-1,60+d-b);
        }
    }
    else
    {
        if(d>=b)
        {
            printf("O JOGO DURO %d HORA(S) E %d MINUTO(S)\n",a-c,d-b);
        }
        else
        {
            printf("O JOGO DURO %d HORA(S) E %d MINUTO(S)\n",a-c-1,60+d-b);
        }
    }
    return 0;

}

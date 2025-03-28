#include<stdio.h>
int main()
{
    int i,c=0,v=0,p=0;
    int a[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]<0)
            c++;
         else if(a[i]>0)
                p++;
        if(a[i]%2==0)
            v++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",v,5-v,p,c);

    return 0;
}

#include<stdio.h>
int gcd(int n1,int n2)
{
    int t;
    while(n2)
        {
            t=n2;
            n2=n1%n2;
            n1=t;
        }

    return n1;
}
int main()
{
    int n1,n2,g,l;
    scanf("%d %d",&n1,&n2);
    g=gcd(n1,n2);
    l=n1*n2/g;
    printf("GCD=%d\n",g);
    printf("LCM=%d\n",l);
}

#include<stdio.h>
int gcd(int a,int b)
{
 while(b)
 {
 int t=b;
 b=a%b;
 a=t;
 }
 return a;
}
int main()
{
 int a,b,GCD,LCM;
 printf("enter two numbers\n");
 scanf("%d%d",&a,&b);
 GCD=gcd(a,b);
 LCM=a*b/GCD;
 printf("G.C.D = %d\n",GCD);
 printf("L.C.M = %d\n",LCM);
 return 0;
}

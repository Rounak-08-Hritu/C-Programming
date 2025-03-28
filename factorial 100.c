#include<stdio.h>
int main()
{
    long long int i,fact=1,n,c=0,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%lld\n",fact);
  int a[99];
  i=0;
  while(fact)
  {
      a[i]=fact%10;
      fact=fact/10;
      i++;
  }
  j=i;
  for(i=0;i<j;i++)
  {
      if(a[i]==0)
        c++;
  }
  printf("%lld\n",c);
}

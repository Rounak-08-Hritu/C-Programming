#include<stdio.h>
main()
{
    int i,fibo[77];
    fibo[0]=1;
    fibo[1]=1;
    i=2;
    while(i<76)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
         printf("%d_",fibo[i-2]);
         i++;
    }

}

//Write a C program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
main()
{
    int n,i,sum=0,n1;
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        i=n%10;
        sum=sum+(i*i*i);
        n=n/10;
    }
    printf("%d",sum);

    if (sum==n1)
        printf("\nYES");
    else
        printf("\nNO");
}

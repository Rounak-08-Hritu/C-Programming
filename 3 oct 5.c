//Write a program to check a 4 digit number pallindrome or not.
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    int n1=n;
    while(n!=0)
    {
        i=n%10;
        sum=sum*10+i;
        n=n/10;
    }

    printf("%d",sum);
    if (n1==sum)
        printf("\nYES");
    else
        printf("\nNO");



    return 0;
}


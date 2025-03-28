//display the number in reverse order
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);

    while(n!=0)
    {
        i=n%10;
        sum=sum*10+i;
        n=n/10;
    }

    printf("%d",sum);



    return 0;
}

#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is big",a);
    else if(b>c && b>a)
        printf("%d is big",b);
    else
        printf("%d is big",c);

}

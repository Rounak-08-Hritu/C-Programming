#include<stdio.h>
main()
{
    int a,b;
    printf("Enter the starting and ending value");
    scanf("\n%d\n%d",&a,&b);
    printf("The total divisor by 4 is=%d",((b-a)/4)+1);
}

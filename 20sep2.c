#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter the number of mangoes and kids");
    scanf("%d%d",&n,&k);
    if (n%k==0)
        printf("YES");
    else
        printf("NO");


    return 0;
}

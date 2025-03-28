#include<stdio.h>
int main()
{
    int t,x,y,c=0,v=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        if(x>=0)
            c++;
        if(x<=0)
            v++;
    }
   if(c>1 && (v==0 || v==1))
        printf("Yes\n");
    else if(v>1 && (c==0||c==1))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

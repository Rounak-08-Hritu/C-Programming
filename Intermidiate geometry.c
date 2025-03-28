#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,d,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        d=((y1-y2)*(x2-x3))-((y2-y3)*(x1-x2));
        if(d==0)
        {
            printf("TOUCH\n");
        }
        else if(d<0)
        {
            printf("LEFT\n");
        }
        else
        {
            printf("LEFT\n");
        }
    }

    return 0;
}

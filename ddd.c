#include <stdio.h>
int main()
{
   int w1,x1,y1,z1,w2,x2,y2,z2;
   scanf("Dia %d\n",&w1);
   scanf("%d : %d : %d\n",&x1,&y1,&z1);
   scanf("Dia %d\n",&w2);
   scanf("%d : %d : %d\n",&x2,&y2,&z2);
   w1=w2-w1;
   x1=x2-x1;
   y1=y2-y1;
   z1=z2-z1;
   if(z1<0)
   {
       z1+=60;
       y1--;
   }
   if(y1<0)
   {
       y1+=60;
       x1--;
   }
   if(x1<0)
   {
       x1+=24;
       w1--;
   }
   printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",w1,x1,y1,z1);

    return 0;
}

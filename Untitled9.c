#include<stdio.h>
int main()
{
 int count=0,i;
 char str[10000];
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
 if(str[i]==' ')
 count++;
 }
 if(count>0)
 count++;
 printf("Word count = %d\n",count);
 return 0;
}

#include<stdio.h>
#include<string.h>
int a[10000];
int main()
{
    int n,m,i,c=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    for ( i = 0; i <n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;
    }
    for(i=0; i<n; i++)
    {
        m=s[i]-'a'+1;
        ++a[m];
    }
    for(i=1; i<27; i++)
    {
        if(a[i]!=0)
            c++;
    }
    if(c==26)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}


#include<stdio.h>
struct hritu
{
    char name[100];
    int mark;
    float gpa;
};
int main()
{
    struct hritu h[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter for person %d\n",i+1);
        printf("Enter name:");
        fflush(stdin);
        gets(h[i].name);
        scanf("%d %f",&h[i].mark,&h[i].gpa);
    }
    for(i=0;i<5;i++)
    {
        printf("Information for person %d\n",i+1);
        printf("Name:%s\n",h[i].name);
        printf("Mark=%d\nGPA= %.2f\n",h[i].mark,h[i].gpa);
    }
}


#include<stdio.h>
struct hritu
{
    int mark;
    float gpa;
};
int main()
{
    struct hritu h[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter age and salary for person %d\n",i+1);
        scanf("%d %f",&h[i].mark,&h[i].gpa);
    }
    for(i=0;i<5;i++)
    {
        printf("Information for person %d\n",i+1);
        printf("Mark=%d\nGPA= %.2f\n",h[i].mark,h[i].gpa);
    }
}

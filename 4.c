#include<stdio.h>
struct hritu
{
    char name;
    int mark;
    float gpa;
};
int main()
{
    struct hritu h1,h2,h3;
    h1.name='A';
    h1.mark=80;
    h1.gpa=5.00;
    printf("H1 \nName:%c\nMark=%d\nGPA=%.2f\n",h1.name,h1.mark,h1.gpa);

    h2.name='B';
    h2.mark=37;
    h2.gpa=0.00;
    printf("H2 \nName:%c\nMark=%d\nGPA=%.2f\n",h2.name,h2.mark,h2.gpa);

    h3=h1;
    printf("H3 \nName:%c\nMark=%d\nGPA=%.2f\n",h3.name,h3.mark,h3.gpa);

    if(h1.mark==h2.mark && h1.gpa==h2.gpa)
        printf("H1=H2\n");
    else
        printf("Not equal\n");
}


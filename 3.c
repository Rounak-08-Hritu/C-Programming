#include<stdio.h>
int main()
{
    //local structure
    struct hritu
{
    char name;
    int mark;
    float gpa;
};
    //local variable
    struct hritu h1,h2;
    h1.name='A';
    h1.mark=80;
    h1.gpa=5.00;
    printf("H1 \nName:%c\nMark=%d\nGPA=%.2f\n",h1.name,h1.mark,h1.gpa);

    h2.name='B';
    h2.mark=37;
    h2.gpa=0.00;
    printf("H2 \nName:%c\nMark=%d\nGPA=%.2f\n",h2.name,h2.mark,h2.gpa);
}


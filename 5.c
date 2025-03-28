#include<stdio.h>
//global stucture
struct hritu
{
    char name;
    int age;
    float salary;
};
int main()
{
    struct hritu h1,h2;
    h1.name='A';
    h1.age=27;
    h1.salary=12570.25;
    printf("H1 \nName:%c\nAge=%d\nSalary=%.2f\n",h1.name,h1.age,h1.salary);

    h2.name='B';
    h2.age=37;
    h2.salary=25070.25;
    printf("H2 \nName:%c\nAge=%d\nSalary=%.2f\n",h2.name,h2.age,h2.salary);


    if(h1.age==h2.age && h1.salary==h2.salary)
        printf("H1=H2\n");
        else
            printf("Not equal\n");
}

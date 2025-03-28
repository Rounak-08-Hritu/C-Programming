#include <stdio.h>
int main()
{
    int a[7],smallest,greatest,i;
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }

    smallest = a[0];
    for (i = 0; i < 7; i++)
    {
        if (a[i] <smallest)
        {
            smallest = a[i];
        }
    }
    printf("Samllest numbers is %d", smallest);
greatest = a[0];
    for (i = 0; i < 7; i++) {
        if (a[i] > greatest) {
        greatest = a[i];
    }
    }
    printf("\nGreatest numbers is %d", greatest);
    printf("\nSum=%d",greatest+smallest);
    return 0;
}

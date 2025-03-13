#include <stdio.h>

void swap(int *x, int *y);

int main()
{

    int a = 4;
    int b = 9;

    printf("Before swap: \n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    swap(&a, &b);

    printf("\nAfter swap: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);


    return 0;
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


//int *x = &a;
//int *y = &b;
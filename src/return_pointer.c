#include <stdio.h>

int *larger(int*, int*);

int main()
{

    int a = 15;
    int b = 92;

    int *p;

    p = larger(&a, &b);

    printf("Between %d and %d, %d is the greatest.\n", a, b, *p);




    return 0;
}

int *larger(int *x, int *y)
{
    if (*x > *y)
        return x;
    else
        return y;
}
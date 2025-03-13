#include <stdio.h>

void swap(int x, int y);  //function declaration

int main()
{

    int a = 4;
    int b = 9;

    printf("Before swap: \n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    swap(a, b);

    printf("After swap: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    




    return 0;
}



//function definition

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("\nInside swap functions: a = %d, b = %d\n", x, y );
}
#include <stdio.h>
#define N 3

int main()
{

    int a[N] = {11, 34, 82};
    int sum, *p;
    

    sum = 0;

    printf("Array: ");
    // for (p = a; p < a + N-1; p++)
    // {
    //     printf("%d ", *p);
    //     sum += *p;
    // }

    p = a;
    while (p < a + N)
    {
        printf("%d ", *p);
        sum += *p++;
    }
    


    printf("\nSum of values in array: %d\n", sum);


    return 0;
}
#include <stdio.h>
#define N 10

int main()
{


    int nums[N] = {1,2,3,4,5,6,7,8,9,10};

    printf("Numbers from 1 to 10:\n ");

    for (int i = 0; i < N; i++)
    {
        printf("%d ", nums[i]);
    }
    



    return 0;
}
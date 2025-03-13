#include <stdio.h>
#define N 10

int main()
{
    int nums[N], *pnum;  //array nums, pointer pnum of to hold the memory address of each element in the array

    printf("Enter %d numbers:\n", N);  
    pnum = nums;
    while (pnum < nums + N)     //while pnum is of a lower memory address, take input
        scanf("%d", pnum++);  //store the input in pnum and increment the memory address later (postfix)

    
    printf("Array: ");
    for (pnum = nums; pnum < nums + N; pnum++)
    {
        printf("%d ", *pnum);
    }
    printf("\n");

    printf("In reverse order: ");
    for (pnum = nums + N -1; pnum >= nums; pnum-- )
    {
        printf(" %d", *pnum);
    }

    printf("\n");

    return 0;
}
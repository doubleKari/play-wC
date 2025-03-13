#include <stdio.h>
#define N 10

int *find_largest(int a[], int n);

int main()
{
    int nums[N] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 31};
    int *largest_num = find_largest(nums, N);

    printf("Array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nThe largest number is: %d\n", *largest_num);
    



    return 0;
}

int *find_largest(int a[], int n)
{
    int *large = a;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *large)
            large = a + i; 
        
    }

    return large;
    
}
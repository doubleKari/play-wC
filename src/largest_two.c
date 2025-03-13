#include <stdio.h>
#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main()
{
    int winner, first_runner_up;
    int nums[N] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 31};

    find_two_largest(nums, N, &winner, &first_runner_up);

    printf("Winner: %d\n", winner);
    printf("First runner up: %d\n", first_runner_up);


    return 0;
}


void find_two_largest(int a[], int n, int *largest, int *second_largest)
{

    if (n < 2)
    {
        printf("Array must have at least two elements\n");
        return;
    }

    int i;
    *largest = *second_largest = (a[0] > a[1]) ? a[0] : a[1];
    *second_largest = (a[0] < a[1]) ? a[0] : a[1];

    for (i = 2; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest && a[i] != *largest)
        {
            *second_largest = a[i];
        }
    }

}










// void find_two_largest(int a[], int n, int *largest, int *second_largest)
// {
//     int i;
//     *largest = a[0];
//     for ( i = 0; i < n; i++)
//         if (a[i] > *largest)
//             *largest = a[i];  
    
//     *second_largest = a[0];
//     for ( i = 0; i < n; i++)
//         if (a[i] == *largest)
//             continue;
        
//         else if (a[i] > *second_largest)
//             *second_largest = a[i];
    
// }


/*
    Thoughts 
        Is this approach the most efficient 
    
    Alternate approach

   
*/



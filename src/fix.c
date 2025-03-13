#include <stdio.h>
#define N 5
void avg_sum(double a[], int n, double *avg, double *sum);

int main()
{

    double b[N] = {1.0 ,2.0,3.0,4.0,5.0};
    double mean, total;
    avg_sum(b, N, &mean, &total);

    printf("Average: %.2f\n", mean);
    printf("Total: %f\n", total);






    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for ( i = 0; i < n; i++)
        *sum += *(a+i);

    *avg = *sum / n;

    
}
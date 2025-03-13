#include <stdio.h>

int main()
{

    int i, *ptri = &i;

    printf("How old are you: ");
    scanf("%d",ptri);

    printf("\nYou're %d years old.", i );

   



    return 1;
}
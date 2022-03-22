// ------------------------------------ SI RANA and Faisal Ahmed ----------------------------

#include<stdio.h>

int main()
{
    printf("---------------- ( 1^1 + 2^2 + 3^3 + ..... + n^n and Sum ) -------------------\n");

    int n, i, j, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    //print the series
    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            printf("%d^%d = ", n, n);
        }
        else
        {
            printf("%d^%d + ", i, i);
        }
    }

    // //print the sum
    // for(i = 1; i <= n; i++)
    // {
    //     for(j = 1; j <= i; j++)
    //     {
    //         sum = sum + i;
    //     }
    // }
    // printf("%d\n", sum);
    printf("Sum");

    return 0;
}
// ---------------------------------- SI RANA and Faisal Ahmed --------------------------------------

#include<stdio.h>

int main()
{
    printf("-------------- ( 1/1^1 + 1/2^2 + 1/3^3 + .... + 1/n^n) --------------------\n");

    int n, i;
    double j, sum = 0, x;

    printf("Enter The value of n: ");
    scanf("%d", &n);

    //print the series
    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            printf("1/%d^%d = ", n, n);
        }
        else
        {
            printf("1/%d^%d + ", i, i);
        }
    }

    //print the sum
    for(j = 2; j <= n; j++)
    {
        x = 1;
        for(i = 1; i <= j; i++)
        {
            x = x * j;
        }
        sum = sum + (1 / x);
    }
    printf("%lf\n", sum + 1);

    return 0;
}

// ------------------------------------ SI RANA and Faisal Ahmed ------------------------------------

#include<stdio.h>

int main()
{
    printf(" --------------------- ( 1/1^2 + 1/2^2 + 1/3^2 + ..... + 1/n^2) -------------------\n");
    int n, i;
    double j, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    //print the series
    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            printf("1/%d^2 = ", n);
        }
        else
        {
            printf("1/%d^2 + ", i);
        }
    }

    //print the sum
    for(j = 1; j <= n; j++)
    {
        sum = sum + 1 / (j * j);
    }
    printf("%lf\n", sum);

    return 0;
}
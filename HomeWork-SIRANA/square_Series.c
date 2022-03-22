// ---------------------------------- SI Rana and Faisal Ahmed -------------------------------

#include<stdio.h>

int main()
{
    printf("----------( 1^2 + 2^2 + 3^2 + ---- + n^2 ) and the sum -------------\n");

    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    //print the series
    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            printf("%d^2 = ", n);
        }
        else
        {
            printf("%d^2 + ", i);
        }
    }

    //print the sum
    for(i = 0; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("%d\n", sum);

    return 0;
}
// 1/2^2 + 1/4^4 +... ... ...+ 1/n^n = sum

#include<stdio.h>

int main()
{
    int n, i;
    double j, sum = 0, x;

    printf("Enter a number: ");
    scanf("%d", &n);

    //print the series
    for(i = 2; i <= n; i = i + 2)
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
    for(j = 2; j <= n; j = j + 2)
    {
        x = 1;
        for(i = 1; i <= j; i++)
        {
            x = x * j;
        }
        sum = sum + (1 / x);
    }
    printf("%lf\n", sum);

    return 0;
}





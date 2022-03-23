// 1/2^2 + 1/4^2 +... ... ...+ 1/n^2 = sum

#include<stdio.h>

int main()
{
    int n, i;
    double j, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    //print the series
    for(i = 2; i <= n; i = i + 2)
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
    for(j = 2; j <= n; j = j + 2)
    {
        sum = sum + 1 / (j * j);
    }
    printf("%lf\n", sum);

    return 0;
}




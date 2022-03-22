
#include<stdio.h>

int main()
{
    int n, i, j, sum = 0;

    printf("Enter a number: ");
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

    //print the sum
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}


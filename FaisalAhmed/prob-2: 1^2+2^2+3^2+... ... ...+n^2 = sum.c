
#include<stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
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

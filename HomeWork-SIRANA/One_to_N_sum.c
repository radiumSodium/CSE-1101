// ------------------------------------ SI RANA and Faisal Ahmed --------------------------


#include<stdio.h>

int main()
{

    printf("----------------- ( 1 + 2 + 3 +.....+ N ) and the sum of it --------------------\n");

    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    //print the series
    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            printf("%d = ", n);
        }
        else
        {
            printf("%d + ", i);
        }
    }

    //print the sum
    for(i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);

    return 0;
}
// --------------------------------------- SI RANA ---------------------------------------

#include<stdio.h>

int main(){

     printf("------------------ Program to Show Addition Substruction Multiplication and Division---------------- \n");

     float a, b, sum, subs, mult, div;

     printf("Enter the Value of A and B : \n");
     scanf("%f%f", &a, &b);

    //  --------------- Sum ------------------
    sum = a+b;
    printf("Sum of A and B is : %.2f \n",sum);

    // ----------------- Substruction ----------------

    subs = a-b ;
    printf("Substruction of A and B is : %.2f \n",subs);

    // ----------------- Multiplication ----------------
    
    mult = a*b;
    printf("Multiplication of A and B is: .2f\n", mult);

    // ----------------- Division ----------------

    div = a/b;
    printf("Division of A and B is : %.2f", div);





return 0;
}

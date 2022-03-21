// --------------------------------------- SI RANA -----------------------------------

#include<stdio.h>
#define PI 3.1416

int main(){
    printf("----------------------- Area of a Circle ---------------------- \n");
    
    float radius, area;
     
    printf("Enter the Radius of the Cicle: \n");
    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("Area of the Circle is : %.2f",area);

return 0;
}
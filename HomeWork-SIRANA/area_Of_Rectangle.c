// --------------------------------------- SI RANA -----------------------------------

#include<stdio.h>

int main(){
    printf("----------------------- Area of a Rectangle ---------------------- \n");
    
    float base, height, area;
     
    printf("Enter the Base and Height: \n");
    scanf("%f%f",&base,&height);

    area =  base * height;

    printf("Area of the Rectangle is : %.2f",area);

return 0;
}

// --------------------------------------- SI RANA -----------------------------------

#include<stdio.h>

int main(){
    printf("----------------------- Area of a Triangle ---------------------- \n");
    
    float base, height, area;
     
    printf("Enter the Base and Height: \n");
    scanf("%f%f",&base,&height);

    area = 0.5 * base * height;

    printf("Area of the Triangle is : %.2f",area);

return 0;
}

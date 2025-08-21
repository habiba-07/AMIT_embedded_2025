#include <stdio.h>

typedef struct complex{
    float real;
    float img;
}COMP;

int main(){
    COMP num1;
    printf("For first complex number\nEnter real and imaginary part respectively\n");
    scanf("%f %f",&num1.real,&num1.img);
    COMP num2;
    printf("For second complex number\nEnter real and imaginary part respectively\n");
    scanf("%f %f",&num2.real,&num2.img);
    printf("sum = %f + %fi",(num1.real + num2.real),(num1.img + num2.img));
}
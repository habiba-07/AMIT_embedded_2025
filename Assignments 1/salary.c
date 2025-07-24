#include <stdio.h>

int main(){
    int salary;
    float DA,HRA;
    float gross_salary = 0.00;
    printf("enter basic salary: ");
    scanf("%d",&salary);
    if(salary <= 10000){
        DA = 80;
        HRA = 20;
    }
    else if (salary <= 20000){
        DA = 90;
        HRA = 25;
    }
    else if (salary>20000){
        DA = 95;
        HRA = 30;
    }
    else{
        printf("invalid");
        return 0;
    }
    gross_salary = salary * (DA/100);
    printf("gross salary = %f",gross_salary);
    return 0;
}
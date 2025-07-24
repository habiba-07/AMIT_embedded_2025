#include <stdio.h>
void calculate(int x, int y, char o);
int main(){
    int num1,num2;
    char op;
    printf("Enter number_1\n");
    scanf("%d",&num1);
    printf("Enter operator\n");
    scanf(" %c",&op);
    printf("Enter number_2\n");
    scanf("%d",&num2);
    calculate(num1, num2, op);
    return 0;
}
void calculate(int x, int y, char o){
    switch(o){
        case '+':
        printf("The result = %d\n", x + y);
        break;
        case '-':
        printf("The result = %d\n", x- y);
        break;
        case '*':
        printf("The result = %d\n",x* y);
        break;
        case '/':
        printf("The result = %f\n",(float) x / y);
        break;
        default:
        printf("Wrong operation\n");
    }
}
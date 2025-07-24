#include <stdio.h>

void swap(int * a, int * b);
int main(){
    printf("Enter first Number\n");
    int num1,num2;
    scanf("%d",&num1);
    printf("Enter second Number\n");
    scanf("%d",&num2);
    printf("before swapping\nx = %d\ty = %d\n",num1,num2);
    swap( &num1, &num2);
    printf("after swapping\nx = %d\ty = %d\n",num1,num2);
    return 0;
}
void swap(int * a, int * b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
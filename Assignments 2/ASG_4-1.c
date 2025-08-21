#include <stdio.h>

void edit (int *x){
    *x+=1;
}

int main(){
    int x;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("before calling edit x = %d\n", x);
    edit(&x);
    printf("after calling edit x = %d", x);
    return 0;
}
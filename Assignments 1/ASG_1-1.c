#include <stdio.h>

int main(){
    printf("Eneter a number\n");
    int x;
    scanf("%d",&x);
    printf("the number is odd = %d\n",(x%2));
    printf("the number is even = %d",!(x%2));
    return 0;
}
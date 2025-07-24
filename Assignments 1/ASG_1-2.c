#include <stdio.h>

int main(){
    int x,n_bit,xold;
    printf("enter any number: ");
    scanf("%d",&x);
    xold = x;
    printf("enter nth bit to toggle(0-31): ");
    scanf("%d",&n_bit);
    x = x ^ (1 << (n_bit ));
    printf("Bit toggle succefully.\n");
    printf("Number before toggling %d bit: %d (in decimal)\n",n_bit,xold);
    printf("Number after toggling %d bit: %d (in decimal)\n",n_bit,x);
    return 0;
}
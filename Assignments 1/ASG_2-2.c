#include <stdio.h>
#include <math.h>

int main(){
    printf("enter a number= ");
    int x,sub;
    scanf("%d",&x);
    sub = x;
    int cub_sum =0;
    while(x){
        cub_sum += pow((x%10),3);
        x/=10;
    }
    if( sub == cub_sum){
        printf("armstrong number");
    }
    else printf("not armstrong number");
    return 0;
}
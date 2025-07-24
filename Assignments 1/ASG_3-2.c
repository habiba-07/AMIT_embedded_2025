#include <stdio.h>

int series(int x);

int main(){
    printf("Enter the number of terms: ");
    int n;
    scanf("%d",&n);
    printf("fibonacci Series: ");
    for( int i = 0; i<n; i++){
        printf("%d, ", series(i));
    }

return 0;
}
int series(int x){
    if ( x== 0) return 0;
    else if (x == 1) return 1;
    else return series(x-1)+series(x-2);


}
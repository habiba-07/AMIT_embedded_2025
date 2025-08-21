#include <stdio.h>

int main(){
    int arr1[5];
    //scan elemnts
    for (int i=0; i<5; i++){
        scanf("%d",&arr1[i]);
    }
    //print elemnts
    for (int i=0; i<5; i++){
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    //maximum
    int max = arr1[0];
    int j =0;
    for (int i=1; i<5; i++){
        if (arr1[i]>max) {
            max = arr1[i];
            j = i;
        }
    }

    printf("The maximum Number is %d in position %d\n", max,j);
    //minmum
    max = arr1[0];
    j=0;
    for (int i=1; i<5; i++){
        if (arr1[i]<max) {
            max = arr1[i];
            j = i;
            }
    }
    printf("The minimum Number is %d in position %d\n", max,j);
    return 0;
}
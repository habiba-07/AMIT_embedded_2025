#include <stdio.h>

void swap(int * a, int * b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(){
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    printf("original array: ");
    for (int i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("reverse of array: ");
    for (int i = size-1 ; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
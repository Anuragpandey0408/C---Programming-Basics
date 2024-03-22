#include <stdio.h>
void printNumber(int *arr, int n){
    for(int i = 0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}


int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumber(arr, 6);

    return 0;
}

//or

#include <stdio.h>
void printNumber(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
}


int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumber(arr, 6);

    return 0;
}
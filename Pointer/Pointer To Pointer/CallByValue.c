#include <stdio.h>

void squre(int n);

int main(){
    int n  = 5;
    squre(n);
    printf("Number is = %d", n);

    return 0;
}

void squre(int n){
    n = n * n;
    printf("Squre is : %d\n", n); 
}

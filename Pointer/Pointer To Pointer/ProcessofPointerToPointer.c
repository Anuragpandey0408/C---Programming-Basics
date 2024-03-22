#include <stdio.h>
int main(){
    float price = 100.00;
    float *ptr = &price;
    float **pptr =  &ptr;
    
    printf("print value : %f\n", **pptr);
    printf("print value : %f", *ptr);
    return 0;

}
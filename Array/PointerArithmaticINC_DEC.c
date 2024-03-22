#include<stdio.h>
int main(){
    
    int age = 22;
    int *ptr = &age;
    printf("int ptr = %u\n", ptr);
    ptr++;
    printf("int ptr++ = %u\n", ptr);
    ptr--;
    printf("int ptr-- = %u\n", ptr);

    float price  = 20.00;
    float *ptr1 = &price;
    printf("float ptr = %u\n", ptr1);
    ptr++;
    printf("float ptr++ = %u\n", ptr1);
    ptr--;
    printf("float ptr-- = %u\n", ptr1);
    return 0;
    
}
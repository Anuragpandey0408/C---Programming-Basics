#include<stdio.h>

int main(){
    int *ptr;
    int x;

    ptr = &x; 
    *ptr = 0;

    printf("x = %d\n",x);  // x = print 0
    printf("*ptr = %d\n", *ptr); // *ptr = print 0

    *ptr +=5; //*ptr =*ptr + 5
    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);

    (*ptr)++; //x = 6
    printf("x = %d\n",x); // = 6 
    printf("*ptr = %d\n", *ptr); // = 6

    *ptr =  *ptr+2; //x = 8 
    printf("x = %d\n",x); // = 8
    printf("*ptr = %d\n", *ptr); // = 8
    return 0; 
}
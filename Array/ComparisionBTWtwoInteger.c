#include<stdio.h>

int main(){
    int age = 22;
    int _age = 25;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u diffrence = %u\n",ptr,_ptr, ptr-_ptr);
    _ptr = &age;
    printf("comparision = %u\n",ptr == _ptr);
    return 0;
}
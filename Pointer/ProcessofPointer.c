#include <stdio.h>

int main(){
    int age = 23;
    int *ptr = &age;
    int _age = *ptr;

    printf("%u", _age);
    return 0;
}
#include <stdio.h>

int main(){
    int age = 23;
    int *ptr = &age;

    //Address

    printf("%p\n",&age);

    printf("%u\n",&age);

    printf("%u\n",ptr);

    printf("%u\n",&ptr);
    
    printf("%d\n",*(&age));

    return 0;
}
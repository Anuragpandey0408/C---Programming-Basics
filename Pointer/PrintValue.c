#include <stdio.h>

int main(){
    int age = 23;
    int *ptr = &age;

    //Value
    
    printf("%d\n",age);

    printf("%d\n",*(&age));

     printf("%d\n",*ptr);


    return 0;
}
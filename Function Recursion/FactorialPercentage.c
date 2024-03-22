#include <stdio.h>

int calPercentage(int science, int maths, int sanskrit);

int main(){
    int science = 98;
    int maths = 95;
    int sanskrit = 99;

    printf("percentage is : %d", calPercentage(science, maths, sanskrit));
    return 0;
}

int calPercentage(int science, int maths, int sanskrit){
    return ((science +  maths + sanskrit) / 3);
}
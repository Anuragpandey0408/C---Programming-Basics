#include <stdio.h>
void sum(int a, int b){
int sum = a + b;
printf("sum is : %d",sum);
}

int main(){
    int a, b;
    printf("enter 1 value :");
    scanf("%d",&a);
     printf("enter 2 value :");
    scanf("%d",&b);
    sum (a, b);
    return 0;
}
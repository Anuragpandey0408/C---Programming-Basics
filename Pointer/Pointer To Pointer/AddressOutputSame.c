#include <stdio.h>

void printAddress(int n);
int main(){
    int n = 4;
    printAddress(n);
    printf("address of n is %u\n", &n);

}
void printAddress(int n){
   printf("address of n is %u\n", &n);
 
}
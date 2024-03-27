#include <stdio.h>

void printString(char arr[]){
    for (int i = 0; arr[i]!='\0'; i++) {
        printf("%c",arr[i]);
    }
    printf("\n");
}

int main(){
char firstName[] = {'A','N','U','R','A','G','\0'};
char lastName[] = "PANDEY";

printString(firstName);
printString(lastName);
return 0;

}
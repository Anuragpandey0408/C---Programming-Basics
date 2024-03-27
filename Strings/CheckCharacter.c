#include <stdio.h>

void checkChar(char str[], char ch){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("character is present :)");
            return;
        }
    }
           printf("character is not present :(");
}

int main(){
    char str[]= "ApnaCollage";
    char ch = 'x';
    checkChar(str,ch);

}
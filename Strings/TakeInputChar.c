#include <stdio.h>
// take a string input from the user using %c ?!
int main(){
    char str[100];
    char ch;  // take input from user;
    int i = 0;
    printf("enter your string :");

    while(ch != '\n'){
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("your string is : %s\n",str);
}
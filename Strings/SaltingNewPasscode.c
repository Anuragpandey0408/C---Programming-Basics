#include <stdio.h>
void Salting(char password[]){
    char salt[] = "123";
    char newPassword[200];

    strcpy(newPassword,password);
    strcat(newPassword,salt);
    printf("your new password is :");
    puts(newPassword);
}
int main(){
    char password[100];
    printf("enter your password :");
    scanf("%s",password);
    Salting(password);
}
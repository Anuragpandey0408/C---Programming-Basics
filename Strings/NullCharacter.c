#include <stdio.h>

int main(){
    char name[] = {'A', 'N', 'U', 'R', 'A', 'G', '\0'};
    printf("%c",name);      // this program is not execute becouse %c is not storing
                            // string its storing character.
    return 0;
}

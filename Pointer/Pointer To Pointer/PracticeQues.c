#include <stdio.h>

void findMax(int *num1, int *num2) {
    if (*num1 > *num2) {
        printf("The maximum number is: %d\n", *num1);
    } else {
        printf("The maximum number is: %d\n", *num2);
    }
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    findMax(&num1, &num2);

    return 0;
}
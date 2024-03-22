#include <stdio.h>

int main()
{
    printf("Sum is : %d", sum(100));
    return 0;
}

// Recursive Function
int sum(int n)
{
    if(n==1){
        return 1;
    }  
    int sumNm1 = sum(n - 1); // sum of n to 1
    int sumN = sumNm1 + n;
    return sumN;
}
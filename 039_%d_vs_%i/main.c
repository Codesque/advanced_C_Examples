#include <stdio.h> 

int main(){

    typedef int input;
    input x1, x2, x3, x4;

    scanf("%d", &x1);           // input :      012      012
    printf("\n");
    scanf("%i", &x2);           // input :      012     0x12
    printf("%d , %i", x1, x2);  // output : 12 , 10     12,18

}
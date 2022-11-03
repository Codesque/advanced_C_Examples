#include <stdio.h> 



int main(){

    /*
    const int x;
    x = 5; //error: assignment of read-only variable 'x'
    */

    const int x;     // simply means cons int x = 0;
    printf("%d", x); // outputs 0

    const int y = 10; // valid assignment of constant value.
}
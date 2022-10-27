#include <stdio.h> 

// In implicit conventions , smaller datatype casts to the bigger data type.This process often happens automaticly. For an example : integer promotion.
void implicit_typeConvention(){
    int x = 10;
    char y = 'a';

    x += y; // char datatype is integer promoted automaticly. Automatic conventions are implicit.

    float z = x + 1.0; // x is implicitly converted to double. (1.0 is double)

    // Even this situation happens very rare , It is possible to lose data because of implicit convention
    char q = -100;
    unsigned int p = 200;
    p += q;  // char q implicitly converted to unsigned int but losed it's sign. 
}

// Explicit convention is a user-defined process which can be done with the " (type) identifier"  syntax. 
void explicit_typeConvention(){

    double x = 1.2;
    int z = (int)x + 5; // x is explicitly converted. 

}


int main(){

    implicit_typeConvention();
    explicit_typeConvention();

    return 0;
}
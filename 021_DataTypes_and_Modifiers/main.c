#include <stdio.h> 

// If there is no datatype given to the variable , compiler automaticly converts the variable to integer datatype.
int sizeof_no_datatyped_var(){
    signed a;
    signed b;
    printf("sizeof(undeclared variable a) : %d\n", sizeof(a)); 
    printf("sizeof(undeclared variable b) : %d\n", sizeof(b));
}

// Default modifier of int and char datatype is SIGNED.
int defaultModifier(){
    int x; // There is unvisible (signed) modifier besides of the int
    char y; // There is unvisible (signed) modifier besides of the char
    x = -1;
    y = -2;
    printf("x: %d , y: %d\n\n", x, y); 

}

// Double datatype can only take the 'long' modifier.
int modifiersOf_double(){
    long double x;
    //short double y;   //[Error] both 'short' and 'double' in declaration specifiers
    //signed double z;  //[Error] both 'signed' and 'double' in declaration specifiers
}


int main(){
    sizeof_no_datatyped_var();
    defaultModifier();
    
    // FLOAT DATATYPE CANT TAKE ANY KIND OF MODIFIERS. 
    //short float x;    //[Error] both 'short' and 'float' in declaration specifiers
    //signed float y;   //[Error] both 'signed' and 'float' in declaration specifiers

    modifiersOf_double(); 
}
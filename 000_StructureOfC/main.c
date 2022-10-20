
// STRUCTURE1 ::: Header Files Inclusion -------> contains C function declarations and macro definitions 

#include <stddef.h> // Defines several useful types and macros 
#include <stdint.h> // Defines exact width integer types 
#include <stdio.h> // Defines core input and output functions 
#include <stdlib.h> //Defines numeric conversion functions , pseudo-random network gen, memory allocation 
#include <string.h> //Defines string handling functions 
#include <math.h> // Defines common mathematical functions 

// STRUCTURE2 ::: Main Method Declaration

int main(void){

    int a; // Variable Declaration 
    // In C program , no variable can be used without being declared
    // Also the variables are to be declared before any operation in function
    a = 5;
    printf("%d", a); // Body (In this example this part is the body of the main function) 
    // body refers to the operations that are performed in the functions : 
        // it can be anything like manipulations , searching , sorting , printing exc. 


    return 0; // Return Statement 
    // This statement refers to give the declared value away from the function as output. 
    // Only void function that can return some value is Main() function (???) 

}

// # before "include" gets processed by a preprocessor. 
    // A processor takes a C program and produces another C program 
    // The produced code from processor has no '#' init . 
    // In example above , the preprocessor copies the preprocessed code of stdio.h 
        // .h refers to header files 
        // These header files generally contain declarations of functions such as printf() in our example 


// {} refers to curly brackets that needs to be at the beggining/end of control statements and functions

// ; refers to semicolon that indicates line termination . Always used to indicate the end of a statement. 



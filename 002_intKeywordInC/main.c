#include <stdio.h> 
#include <limits.h> // You can get INT_MAX , INT_MIN by this preprocesser

void dataType_int(void){

    /*
    
    the int keyword gives a variable an integer type . However that doesnt mean the given integer type represent all the integer types
    that C can have. integer size of C dependent to the C implementation that you use. 

    But worth mentioning that The C Standarts implies that an int type must have a range at least -32768 to 32767 

    */

    printf( "minimum int value = %d\n"
            "maximum int value = %d\n"
            "size of int in bytes = %zu\n" 
            "size of int in bits = %zu\n" ,
            INT_MIN , INT_MAX , sizeof(int), // sizeof(x) returns how many bytes the 'x' datatype has 
            sizeof(int) * CHAR_BIT // A byte has 8 bits init that is why we are multiplying (bytes*8) 
    );
} 

void dataType_unsignedInt(void){

    printf( "minimum unsignedInt value = %u\n" 
            "maximum unsignedInt value = %u\n" 
            "UINT_MAX + 1 = %u\n" 
            "UINT_MAX + 2 = %u\n",
            0 , UINT_MAX - 1 , UINT_MAX + 1 , UINT_MAX + 2 
            //UINT_MAX + 1 = 0
            //UINT_MAX + 2 = 1
    );

    /*
    Unsigned int datatype can never overflow , rather it is performed moduler artihmetic when it exceeds the maximum value due to the 
    C standarts
    */
}


int main(void){
    //dataType_int();
    dataType_unsignedInt();
}
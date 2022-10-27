#include <stdio.h> 
#include <stdbool.h>

/*
    & == "BITWISE AND OPERATOR";   
                // Takes two binary numbers and compares the bits of those numbers by one by. If two bits are different , returns 0 for that digit
    | == "BITWISE OR OPERATOR" ;
                // Takes two binary numbers and compares the bits of those numbers by one by. If one of the bits is 1 , returns 1 for that digit 
    ^ == "BITWISE XOR OPERATOR";
                // Takes two binary numbers and compares the bits of those numbers by one by. If both of the bits are different then each other , returns 1 for that digit
    ~ == "BITWISE NOT OPERATOR";
                // Takes one binary number and turns it's digits to opposite value's. For an example , returns 0 for the difit if the digit is 1. 

    NOTE : The bitwise XOR operator is the most useful operator from a technical interview perspective.
*/
void examplesOf_bitwise_operations(){

    unsigned char a = 5, b = 9; 
    // a = (5)10 == (00000101)2 
    // b = (9)10 == (00001001)2

    // 00000101 & 00001001 = 00000001
    printf("a & b = %d\n", a & b); 

    // 00000101 | 00001001 = 00001101
    printf("a | b = %d\n", a | b); 

    // 00000101 ^ 00001001 =  00001100// ^ = XOR , YA DA 
    printf("a ^ b = %d\n", a ^ b);  

    // ~ 00001001 = 11110110 // ~ = NOT
    printf("~a = %d\n", ~a); 


}

/*
Shifting bits is unidentified if you are :
    *using them with negative amount of shifts ,
    *using them with some amount  of shifts which is greater than the storage size of that datatype (for an example :int x; x<<(32+1);)
*/
void shifting_bits_operator(){
    int b = 9; // 00001001

    // 00001001 << 1 = 00010010 
    printf("b<<1 = %d\n", b << 1);

    // 00001001 >> 1 =  00000100
    printf("b>>1 %d\n", b >> 1); 

}

int returnTheOnlyOdd( int arr[] , int number_of_elements){

    int res = 0, i;

    for (i = 0; i < number_of_elements; i++){
        res ^= arr[i]; 
    }
    return res;
}
// in a given array which has pairs of numbers except some number. Find the number that occurs odd number of times 
void algorithms_with_bitwise_operator(){

    int numarr[] = {14, 14, 98, 98, 21, 21, 14, 14, 23, 23, 19, 45, 45, 32, 32, 11, 11, 11, 11};
    size_t n = (sizeof(numarr) / sizeof(numarr[0]) );
    printf("The array of numbers : [\t");
    for (int i = 0; i < n; i++){
        printf("%d\t", numarr[i]);
    }
    printf("]\n the number that occurs odd number of times is %d", returnTheOnlyOdd(numarr, n));
}

int main(){

    //examplesOf_bitwise_operations();
    //shifting_bits_operator();
    algorithms_with_bitwise_operator();
}
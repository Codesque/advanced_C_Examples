#include <stdio.h> 

/*

*/
void comparingFloat(){
    float x = 0.1; 

    if (x == 0.1){
        printf("I work well enough");
    } 
    else if (x == 0.1f){
        printf("This isn't supposed to happen");
    } 
    else {
        printf("Printing me is impossible");
    } 

}

/* Decimals are automaticly considered as doubles as we can understand from the fact that they allocate 8 bytes of the memory*/
void datatypeOfDecimal(){ 

    printf("\n\nsizeof(float):%d \t sizeof(0.1) :%d \t sizeof(0.1f):%d\n\n", sizeof(float) , sizeof(0.1) , sizeof(0.1f));
}

/* HOW TO CONVERT DECIMAL TO BINARY ???
    Lets assume that num = 4.47 ; k = 3(which identifys how many bits will be after the dot)

        //STEP 1 : Take the integer part and divide it again and again until the quotiant is equal to 0 , while doing this , save the reminder values

            integer_part = 4 ; quotient = 4/2 = 2; reminder = 0;
            integer_Part = last_quotient = 2; quotient =  2/2 = 1 ; reminder = 0;
            integer_part = last_quotient = 1; quotient = 1/2 = 0; reminder = 1;

            INTEGER PART IN BINARY IS = 100

        //STEP2 : Take the integer part of the number and multiply it by two. Save the integer part of that multiplication and continue with
        this process until how many binary number that you want.

        k = 3
            num = 4.47 ; floating_part = 0.47 ; multiplication = 0.47 * 2 = 0.94 ; integer_part_of_the_multiplication = 0;
            num = 0.94 ; floating_part = 0.94 ; multiplication = 0.94 * 2 = 1.88 ; integer_part_of_the_multiplication = 1;
            num = 1.88 ; floating_part = 0.88 ; multiplication = 0.88 * 2 = 1.76 ; integer_part_of_the_multiplication = 1;

            DECIMAL PART IN BINARY IS = 011 

        // CONCLUSION = 100.011
*/
void how2convert_decimal2binary(){}

/*
In C , when we try any arithmetic operation between two different datatypes , the small datatype is going to be converted to big datatype. This situation called "promotion of the smaller datatype".
float + double = (double)float + double = double + double = double ; 
*/
void arithmetic_operation_with_float_and_double(){

    double x = 0.0;
    float y = 4.47f; 

    printf("\n\nsizeof(double + float) = %d\n\n",sizeof(x + y)); // float datatype is being promoted in an arithmetic proccess.
}

/*
In float 
=> (0.1)10 = (0.00011001100110011001100)2
In double after promotion of float ...(1)
=> (0.1)10 = (0.00011001100110011001100000000000000000...)2
                                      ^ padding zeroes here
In double without promotion ... (2)
=> (0.1)10 = (0.0001100110011001100110011001100110011001100110011001)2
*/
void promotion_means_padding(){}

int main(){
    comparingFloat(); // outputs : This isn't supposed to happen
    datatypeOfDecimal(); // outputs : sizeof(float):4          sizeof(0.1) :8          sizeof(0.1f):4
    how2convert_decimal2binary();
    arithmetic_operation_with_float_and_double(); // outputs :sizeof(double + float) = 8
    promotion_means_padding(); //padding causes this bug 
    return 0;
}
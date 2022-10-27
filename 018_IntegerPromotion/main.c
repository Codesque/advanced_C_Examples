#include <stdio.h>  

/*
When you try to do arithmetic operations on literal datatypes which allocates memory less then integer datatype : 
1. First they are implicitly casted to integer if there is an overflow : 
2. They are implicitly casted to unsigned integer . After that the aritmetic operations are done. 
3. After all of that the casted to char again. 
*/
int overflowingCharOperations(){
    char a = 30, b = 40, c = 50;
    char d = (a * b) / c; // There is an overflow in a*b = 30*40 = 1200. a char value can take -127 to 128. Because of that they are promoted 
                        // to integer datatype while aritmetic operation is happening. 
    printf("%c\n\n", d); // outputs ↑

}

/*
Because of integer promotion , when we use comparison operators , the char datatypes are turned into integer values .
And this process can give you unexpected results depend on the char datatype that you are operating with.

In the code down bellow , char a and unsigned char b has the same number values. But when we convert them to integer because of the integer promotion ; 
a casted to integer -5 and b is casted to 251 because unsigned values cant be negative. 
This explains why they are not equal when we use comparison operator upon them.
*/
char* differentIntegerPromotions(){

    char a = 0xfb;
    unsigned char b = 0xfb;

    printf("\n\noctal_value : %o , char value : %c\n\n", a, a); 
    printf("\n\noctal_value : %o , char value : %c\n\n", b, b);

    /*
    octal_value : 37777777773 , char value : ¹
    octal_value : 373 , char value : ¹
    */


    if (a == b){
        return "EQUAL";
    }
    return "NOT EQUAL";
}


/*Some data types like char , short int take less number of bytes than int, these data types are automatically promoted to int or unsigned int 
when an operation is performed on them. This is called integer promotion
*/
int main(){

    overflowingCharOperations();
    printf("\n\n%s\n\n", differentIntegerPromotions()); // outputs NOT EQUAL
    return 0;
}
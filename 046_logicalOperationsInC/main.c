#include <stdio.h> 
#include <stdbool.h>



/*
AND OPERATOR "&&" , dont look up an execute the second argument if the first statement is false. 
OR OPERATOR "||" , dont look up and execute the second argument if the first statement is true.
*/

void usageOf_logicalOperators(){
    int a = 10, b = 9, c = 8; 
    if (a > b && b > c || c > a){
        printf("Hello World!");
    } 
}

void executionOf_bool_arguments(){
    int a = 10, b = 9;

    bool orOperator = ((a == b) || printf("Hello World!"));
    bool andOperator = ((a == b) && printf("Alright Earth!")); 
}

// In logical operations with integers , all values that is greater than 0 are considered as  1-true.
void logicalOperations_with_integers(){

    int x = 4, y = 5;
    (x && y) ? printf("True") : printf("False"); // outputs : True
}

// result of ~ operator with a small number could be very large if you determine the output as unsigned. 
void attention_on_not_operator(){

    unsigned int x = 1;
    printf("signed value of ~x is : %d\n" , ~x);
    printf("Unsigned value of ~x is : %u\n", ~x); 
}

int main(){
    //usageOf_logicalOperators(); // outputs Hello World
    //executionOf_bool_arguments(); // outputs Hello World
    //logicalOperations_with_integers(); // outputs True
    

    /*
    signed value of ~x is : -2
    Unsigned value of ~x is : 4294967294d
    */
    attention_on_not_operator();

}
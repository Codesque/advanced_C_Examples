#include <stdio.h> 
/*
While compiler is making operations with operators , compiler considers two things :

    1. Operator's presedence : determines which operation would be done firstly 
    2. Operator's associtivity : determines how operations would be handled if two operations has the same presedence 

    NOTE : Exponent > Multiplication , division > Addition , Subtraction  is the order of presedence per operation type
    NOTE :  There are two types of Associtivities : LTR(Left to right) and RTL(Right to left)
    NOTE :  There are limited number of RTL operators than LTR which are : ++--(Prefix Increment/Decrement) , ?:(Ternary Conditions) , =(Assignment Operator)
*/


// Comma has the least presedence among all operators. 
void least_presedence(){
    int a;
    a = 1, 2, 3; // this expression expended as (a=1) , 2 , 3;
    if (a == 2 || a == 3){printf("TRUE");}
    else {printf("FALSE");}
}

// there is no chaning of comparision in c language because of the LTR associativity of ('>') operator
void no_chaning_of_comparison(){

    int a = 10 , b = 20 , c = 30 ; 

    if ( c > b > a){ // this expression expanded as (c>b)>a ===> (1)>a ====> 0 
        printf("TRUE");
    } 
    else{
        printf("FALSE");
    }
}
int x;
int f1(){
    x = 5;
    return x;
} 

int f2(){
    x = 10;
    return x;
}

/*
+ is a LTR operator , but this doesnt mean compiler will call the f1 function before f2 function.Also this undependent movement makes your program compiler dependent.

In other words , which function will be evaluated first , is not defined by the C program.
*/
void associativity_doesntDefine_evaluationOrder(){
    int p = f1() + f2();
    printf("%d", x);
    }


int main(){

    //least_presedence(); // outputs : FALSE
    //no_chaning_of_comparison(); // outputs : FALSE
    associativity_doesntDefine_evaluationOrder(); //outputs 10.
}

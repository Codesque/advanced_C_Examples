#include <stdio.h>
#include <stdlib.h>

// To use prefix and postfix operators , you need to use l-values instead of r-values
void example1(){
    int a = 0 ;

    //printf("%d", ++(-a)); //error: lvalue required as increment operand

    /*
    explanation: a is a l-value but - operator makes "a" a r-value.
    */
}

/*
L-value used to denote "locator-value". Which you can understand from it's definition , l-value simply means an object that has an identifiable location address.

l from the l-value also denotes the left side of the assignment(=) operator where we usually use l-values. But of course , you can use l-values on the right side of the operations. 
With the addition of "const" keyword within the C language , we have a term called "modifiable l-values" which differantiates the constant l values with modifiable ones. 
All l-values are not modifiable , in other words , you cant change the address of that l-value. Nevertheless you can change the address of the "Modifiable l-values" 
A modifiable l-value cannot have an array type, an incomplete type, or a type with the const attribute. 
For structures and unions to be modifiable lvalues, they must not have any members with the const attribute.

WHAT ARE L-VALUES ?  

* An identifier of integral , floating , pointer(usually modifiable l-value) , structure or union type. 
* A subscript ([]) that doesnt evaluated to an array. 
* A member selection expression (-> and .) 
* A unary indirection(*) expression that doesnt refer to an array. 
* An l value expression in parantheses. 
* A constant object (which is not part of modifiable-l-values) 
*/
void l_value(){

    /*EXAMPLE1 - TYPECASTING L-VALUES*/
    int *ptr; // l-value
    float x = 10.0f; //l value
    float y = 100.0f; // l value
    long l = 10.000;
    //(float *)ptr = &x; //error: lvalue required as left operand of assignment
    // Explanation : Initially typecasting makes an l-value to a r-value. EXCEPT TYPECASTING TO POINTER (ASK TO YOUT TEACHER BECAUSE IT IS NOT WORKING)


    /*EXAMPLE2 - R-VALUES WITH UNARY OPERATORS*/
    // ptr = &((int)x); //error: lvalue required as unary '&' operand
    // ptr = &12;       //error: lvalue required as unary '&' operand



    /*EXAMPLE3 - INTRODUCING MODIFIABLE L-VALUES*/
    ptr = &x; // it is allowed to assign incompatible pointer types in C. 
    printf("%lf\n", *((float*)ptr)); // outputs : 10.000000
    ptr = &y; // pointers are modifiable-l-values because we can change their address. 
    printf("%lf\n", *((float*)ptr)); // outputs : 100.000000

    /*EXAMPLE4 - ASSIGNING SOMETHING TO DEREFERENCING POINTER*/
    *ptr = 10;
    printf("%d\n", *ptr); // outputs : 10;
    //Explanation : Dereferenced pointer is still an l-value.

    *(ptr + 10) = 100;
    printf("%d\n", *(ptr + 10)); // outputs : 100;  
    //Explanation : Dereferencing some address makes the expression an l-value.  


    /*EXAMPLE5 - ARRAYS ARE L-VALUES */
    int arr[20];
    arr[12] = 10;
    printf("arr[12] is %d\n", arr[12]);
    *(arr + 12) = 100;
    printf("*(arr+12) is %d , and arr[12] is now '%d' \n", *(arr + 12) , arr[12]);

    /*  EXPLANATION
    [] is subscription operator that translates the code as :
        // E1[E2] --------> *((E1) + (E2)); E1 is address of the starting point of an array. E2 is integer.
    As you can guess , subscripting is commutative :
        // arr[i] = *((arr) + (i)) ::::::> i[arr] = *((i) + (arr));
    */ 

   /*EXAMPLE 6- STRUCTURES ARE L-VALUES*/ 
   struct obj {
       int m;
    };
   struct obj myObj;
   myObj.m = 10;

   struct obj *objPtr = NULL;
   objPtr = (struct obj* )malloc(sizeof(struct obj));
   objPtr->m = 100;
   printf("myObj.m = %d , objPtr->m = %d\n", myObj.m, (objPtr->m));

   free(objPtr);
}

/*
R from r-value , denotes the right side of the assignment operation . R value refers to data value that is stored at some address in memory. 

You cant assign anything to r-values because they dont denote adresses. 
*/
void r_value(){

    /*EXAMPLE1 - ASSIGNMENT DUE TO A R-VALUE*/
    int q = 10; // l value
    //9 = b;//error: lvalue required as left operand of assignment

    /*EXAMPLE2 - ASSIGNING SOME VALUE TO AN ARITHMETHIC EXPRESSION*/ 
    //b + 1 = b;//error: lvalue required as left operand of assignment 
    // Explanation : output of the aritmethic operation is type of r-value 


    /*EXAMPLE3 - TERNARY OPERATOR WITH R AND L VALUES*/
    int a, b;
    //(a > b ? a : b) = 0;//error: lvalue required as left operand of assignment
    /* EXPLANATION :
    In C, the ternary operator does not preserve lvalue.
        //condition ? rvalue : rvalue ;

    In C++, the ternary operator does preserve as glvalue
        //condition ? glvalue : glvalue ;
    */



}


int main(){
    example1();
    l_value();
    r_value();
}
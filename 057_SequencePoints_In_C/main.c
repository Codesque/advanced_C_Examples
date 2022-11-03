#include <stdio.h> 
#include <stdlib.h> 


void undefinedExample1(){

    auto int f1() , f2(); 
    int x = 10;
    int f1() { 
        x = x + 10;
        return x;
    };  

    int f2(){
        x = x - 5;
        return x;
    };

    int y;
    y = f1() + f2(); // there is no rule that says f1 is gonna be called before f2. Consequence is dependent by compiler and OS. 
}

int undefinedExample2(){
    int i = 10;
    return i++ * i++;  //post-prefix operations are considered as undefined by C Standarts.
}


/*
Definition : Evaluation of an expression may produce side effects. For an example : 

like in the undefinedExample1() , the evaluation order matters the consequence. It is compiler and OS dependent because there is no defined calling order of functions. 

like in the undefinedExample2() , the return value is ambiguous because what evaluated first and how it evaluated effects the consequence. consequence can be 100 or 121. 

Unlike above cases, at certain specified points in the execution sequence called sequence points, all side effects of previous evaluations are guaranteed to be complete. A sequence point defines any point in a computer program’s execution at which it is guaranteed that all side effects of previous evaluations will have been performed, and no side effects from subsequent evaluations have yet been performed.

*/
void sequencePointsExample1(){
    auto int f11();
    auto int f21();
    int x = 10;
    int f11() { 
        x = x + 10; // side effect which is determined by calling order of f11 function.
        return x;
    };  

    int f21(){
        x = x - 5;  // side effect which is determined by calling order of f21 function.
        return x;
    };

    // THESE OPERATORS HAVE SEQUENCE POINTS WHICH BASICLY MEANS THE SIDE EFFECTS OF THE METHODS ARE GUARANTEED TO BE EXECUTED BECAUSE THERE IS A DEFINED ORDER.
    int y = f11() && f21();   // AND OPERATOR
    int z = f11() || f21();   // OR OPERATOR
    int q = (f11(), f21());     // COMMA AS AN OPERATOR (DOESNT WORK WITH THE SEPERATOR)     
    int p = (f11() ? f21() : f21(), f21());     //  TERNARY OPERATOR 

}

int partialSequencePoints(){
    int a = 10;int b = 100;
    int partialSequence = 110;
    a = b; // any statement that is seperated with ; , semicolon
    /*AND OTHER CONTROL EXPRESSIONS ... */ 
    return partialSequence; // return statement 

}


int main(){
    undefinedExample1();
    undefinedExample2();

    sequencePointsExample1();
    partialSequencePoints();
}
#include <stdio.h> 

#pragma startup foo 
#pragma exit bar 

void foo(){
    printf("Inside of the function foo()\n\t");
}

void bar(){
    printf("\t\t\tInside of the function bar()");
}

// pragma somehow isnt effective in my compiler. it suppose to be extract some output like : 
/*
Inside foo()
    Inside main()
        Inside bar()
*/

// Also it suppose to be not to compile with gcc program.c command but it works and outputs the same stuff that shouldnt be like that at the first place 

int main(){

    foo();
    bar();
    printf("Inside of the function main()\n");

    /* Some pragma commands to disable warnings : 
    #pragma warn Directive: This directive is used to hide the warning message which is displayed during compilation. We can hide the warnings as shown below: 

        #pragma warn -rvl: This directive hides those warnings which are raised when a function that is supposed to return a value does not return a value.
        #pragma warn -par: This directive hides those warnings which are raised when a function does not use the parameters passed to it.
        #pragma warn -rch: This directive hides those warnings which are raised when a code is unreachable. For example, any code written after the return statement in a function is unreachable.
            
    */


    return 0;
}